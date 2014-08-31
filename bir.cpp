#include <QFileDialog>
#include <QDebug>
#include <QVector>
#include <QDirIterator>
#include <QListWidgetItem>
#include <QWidgetItem>
#include <QTransform>
#include <QMessageBox>
#include <QImageWriter>
#include "bir.h"
#include "ui_bir.h"
#include "selectitem.h"

BIR::BIR(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BIR)
{
    ui->setupUi(this);

    connect(ui->browseIn, SIGNAL(released()), this, SLOT(browseInput()));
    connect(ui->browseOut, SIGNAL(released()), this, SLOT(browseOutput()));
    connect(ui->pixelRadio, SIGNAL(released()), this, SLOT(pixelResize()));
    connect(ui->percentageRadio, SIGNAL(released()), this, SLOT(ratioResize()));
    connect(ui->sizeSlider, SIGNAL(valueChanged(int)),this, SLOT(sliderMoved(int)));
    connect(ui->resetList, SIGNAL(clicked()), this, SLOT(resetUi()));
    connect(ui->removeItem, SIGNAL(released()), this, SLOT(removeItem()));
    connect(ui->fileList, SIGNAL(currentRowChanged(int)), this, SLOT(selectImage()));
    connect(ui->startResize, SIGNAL(clicked()), this, SLOT(startResize()));
    connect(ui->aspectRatio, SIGNAL(currentIndexChanged(int)), this, SLOT(aspectRatioChange(int)));
    ui->percentageRadio->click();

    QPixmap pixmap(":/icon/delete");
    QIcon ButtonIcon(pixmap);
    ui->removeItem->setIcon(ButtonIcon);
    ui->removeItem->setIconSize(pixmap.rect().size());

    QIntValidator* numeric = new QIntValidator(0, 10000, this);
    ui->heightEdit->setValidator(numeric);
    ui->widthEdit->setValidator(numeric);
}



BIR::~BIR()
{
    delete ui;
}

void BIR::browseInput()
{
    QStringList dir = browseDialog(true);
    if(dir.isEmpty())
        return;

    ui->inputFile->setText(dir[0]);

    if(ui->outputFile->text() == "" && QDir(dir[0]).exists())
        ui->outputFile->setText(dir[0]);


    for(QString item : dir)
    {
        checkAgain:
        if(QDir(item).exists())
        {
            populateLists(buildListFromDir(item));
            if(ui->fileList->count() == 0 && !ui->useSubdirectories->isChecked())
            {
                int ret = QMessageBox::question(this,
                                                "No Files Selected",
                                                "You did not select any files. Did you want to include subdirectories?",
                                                QMessageBox::Yes | QMessageBox::No);
                if(ret == QMessageBox::Yes)
                {
                    ui->useSubdirectories->setChecked(true);
                    goto checkAgain;
                }
            }
        }else{
            QVector<QFileInfo> file;
            file.append(QFileInfo(item));
            this->populateLists(file);
        }
    }
}

void BIR::browseOutput()
{
    QStringList dirl = browseDialog(false);

    if(dirl.isEmpty())
        return;

    ui->outputFile->setText(dirl[0]);
}

QVector<QFileInfo> BIR::buildListFromDir(QString dir)
{
    QVector<QFileInfo> files;
    QDirIterator dirIt(dir, (ui->useSubdirectories->isVisible() && ui->useSubdirectories->isChecked() ? QDirIterator::Subdirectories : QDirIterator::NoIteratorFlags));
    while (dirIt.hasNext()) {
        dirIt.next();
        if (QFileInfo(dirIt.filePath()).isFile())
                 files.append(dirIt.fileInfo());
    }
    return files;
}


QStringList BIR::browseDialog(bool isInput)
{
    QFileDialog *dialog = new QFileDialog(this);

    dialog->setDirectory(QDir::homePath());
    dialog->setFileMode(ui->useDir->isChecked() || !isInput ? QFileDialog::Directory : QFileDialog::ExistingFiles);

    int result = dialog->exec();

    QStringList directory;

    if (result)
        directory = dialog->selectedFiles();

    delete dialog;
    return directory;
}


void BIR::populateLists(QVector<QFileInfo> items)
{
    QList<QByteArray> extensions = QImageWriter::supportedImageFormats() ;

    SelectItem *fileItem;
    for(int i = 0; i < items.count(); i++)
    {
        QString path = items.at(i).absoluteFilePath();
        QString name = items.at(i).fileName();

        if(!ui->dirStruct->isChecked())
        {
            QList<QListWidgetItem*> list = ui->fileList->findItems(name, Qt::MatchContains);
            if(!list.empty())
                continue;
        }

        if(extensions.contains(items.at(i).suffix().toLower().toAscii())) //Check if the item is not already there
        {
                fileItem = new SelectItem(path);
                fileItem->setText(name);
                ui->fileList->addItem(fileItem);
        }

        ui->progressBar->setValue((i / (float)items.count()) * 100.0);
    }
    ui->progressBar->setValue(0);
}


void BIR::pixelResize()
{
    pixelOff(true);
}

void BIR::ratioResize()
{
    pixelOff(false);
}

void BIR::pixelOff(bool on)
{
    ui->widthEdit->setEnabled(on);
    ui->heightEdit->setEnabled(on);
    ui->cropMode->setEnabled(on);
    ui->sizeModePager->setCurrentIndex(on ? 1 : 0);
    setupAspectRatio(on);
}

void BIR::sliderMoved(int value)
{
    ui->sliderLabel->setText(QString::number(value).append("%"));
    selectImage();
}

void BIR::resetUi()
{
    ui->fileList->clear();
    ui->inputFile->setText("");
    ui->outputFile->setText("");
    ui->rotation->setCurrentIndex(0);
    ui->aspectRatio->setCurrentIndex(0);
    ui->cropMode->setCurrentIndex(0);
    ui->useDir->setChecked(false);
    ui->widthEdit->setText("");
    ui->heightEdit->setText("");
}

void BIR::aspectRatioChange(int item)
{
    ui->cropMode->setEnabled(item == 2);
}

void BIR::removeItem()
{
    ui->fileList->takeItem(ui->fileList->currentRow());
}

void BIR::selectImage()
{
    SelectItem * item = dynamic_cast<SelectItem *>(ui->fileList->currentItem());
    if(item == NULL)
    {
        ui->removeItem->setEnabled(false);
        ui->widthEdit->setText("");
        ui->heightEdit->setText("");
        return;
    }
     ui->removeItem->setEnabled(true);

    if(ui->percentageRadio->isChecked())
    {
        BIR::setNewDimensions(item);
        ui->widthLabel->setText(QString::number(item->newWidth));
        ui->heightLabel->setText(QString::number(item->newHeight));
    }
    //    qDebug()<< QString::number(item->width()) + "Row: " + QString::number(ui->fileList->currentRow());

}

void BIR::setNewDimensions(SelectItem* item)
{
    float ratio = ui->sizeSlider->value() * 0.01;
    item->newWidth = (item->width() * ratio);
    item->newHeight = (item->height() * ratio);
}

void BIR::startResize()
{
    if(ui->fileList->count() == 0 || ui->outputFile->text().trimmed().count() < 2)
    {
        return;
    }

    int dirDiffIndex = -1;
    int goodCount = 0;

    //Get this ahead of time because the difference between directories does not need
    //to be found with each file
    if(ui->fileList->count() > 1 && ui->dirStruct->isChecked())
    {
        dirDiffIndex = getDiffDirIndex();
    }else{
        QDir().mkdir(ui->outputFile->text());
    }

    Qt::AspectRatioMode aspectRatio;
    switch(ui->aspectRatio->currentIndex())
    {
        case 0:
            aspectRatio = Qt::IgnoreAspectRatio;
            break;
        case 1:
            aspectRatio = Qt::KeepAspectRatio;
            break;
        case 2:
        default:
            aspectRatio = Qt::KeepAspectRatioByExpanding;
    }

    setNewDimensions();

    SelectItem * item;
    QImage image;
    for(int i = 0; i < ui->fileList->count(); i ++)
    {
        item = dynamic_cast<SelectItem *>(ui->fileList->item(i));
        image = QImage(item->path);


        //Resize Image
        image = image.scaled(item->newWidth, item->newHeight, aspectRatio, Qt::SmoothTransformation);

        //Crop Image
        if(ui->aspectRatio->currentIndex() == 2)
        {
            image = this->cropImage(&image, item->newWidth, item->newHeight);
        }

        //Append text
        QString appendText = "";
        if(ui->appendFileChk->isChecked())
        {
            appendText = ui->appendFileTxt->text();
        }


        //Rotate Image
        if(ui->rotation->currentIndex() != 0)
        {
            image = this->rotateImage(&image);
        }

        //Save Image
        QString name = getItemSubdir(item, dirDiffIndex) + appendText + item->text();
        if(!ui->deleteExisting->isChecked() && QFile(name).exists())
        {
            continue;
        }else{
            if(image.save(name, 0, 100))
                goodCount++;
        }

        ui->progressBar->setValue((i / (float)ui->fileList->count()) * 100.0);
    }
    ui->progressBar->setValue(0);
    QMessageBox::information(this,
                             "Resizing Complete",
                             QString::number(goodCount) + "/" + QString::number(ui->fileList->count()) + " images resized successfully",
                             QMessageBox::Ok);

}

void BIR::setNewDimensions()
{
    SelectItem * item;
    QImage image;
        for(int i = 0; i < ui->fileList->count(); i ++)
        {
            item = dynamic_cast<SelectItem *>(ui->fileList->item(i));
            if(ui->percentageRadio->isChecked())
            {
                this->setNewDimensions(item);
            }else{
                item->newHeight = ui->heightEdit->text().toInt();
                item->newWidth = ui->widthEdit->text().toInt();
            }
        }
}

QImage BIR::rotateImage(QImage* image)
{
    int deg = (ui->rotation->currentIndex() * 90);

    QTransform transform;
    transform.rotate(deg);
    return image->transformed(transform);
}

QImage BIR::cropImage(QImage * image, int width, int height)
{
    int x,y;
    int iHeight = height;
    int iWidth = width;
    int nHeight = image->height();
    int nWidth = image->width();

    switch(ui->cropMode->currentIndex())
    {
        case CRP_CTR:
             x = (nWidth / 2)  - (iWidth / 2);
             y = (nHeight / 2) - (iHeight / 2);
        break;
        case CRP_TOP_LEFT:
            x = 0;
            y = 0;
        break;
        case CRP_TOP_RIGHT:
            x = iWidth - nWidth;
            y = 0;
        break;
        case CRP_BOT_LEFT:
            x = 0;
            y = nHeight - iHeight;
        break;
        case CRP_BOT_RIGHT:
            x = nWidth - iWidth;
            y = nHeight - iHeight;
        break;
    }

    return image->copy(x,y,width,height);
}

QString BIR::getItemSubdir(SelectItem* item, int diffIndex)
{
    if(diffIndex < 1)
        return ui->outputFile->text() + "/";

     QString dir =  QFileInfo(item->path).absoluteDir().absolutePath();
     dir = ui->outputFile->text() + dir.remove(0, diffIndex);
     QDir(dir).mkdir(dir);
     return dir + "/";
}

int BIR::getDiffDirIndex()
{
    int index = 0;
    int limit = INT_MAX;

    QString lastFile = QFileInfo(dynamic_cast<SelectItem *>(ui->fileList->item(0))->path).absoluteDir().absolutePath();
    QString thisFile = lastFile;

    //Find the last diff between all files
    for(int i = 1; i < ui->fileList->count(); i++)
    {
        thisFile = QFileInfo(dynamic_cast<SelectItem *>(ui->fileList->item(i))->path).absoluteDir().absolutePath();;
        qDebug() << thisFile;
        qDebug() << lastFile;
        while(index < limit
              && thisFile.length() > index + 1 && lastFile.length() > index + 1
              && (thisFile.at(index) == lastFile.at(index)))
        {
            index++;
        }



        limit = index;
        index = 0;
        lastFile = thisFile;
    }

    //Rewind to the last diff directory
    while(thisFile.at(limit).toAscii() != '/')
        limit--;

    return limit;
}

void BIR::setupAspectRatio(bool pixelResize)
{
    ui->aspectRatio->clear();
    if(pixelResize)
    {
        ui->aspectRatio->addItem("Ignore aspect ratio");
        ui->aspectRatio->addItem("Preserve aspect ratio inside dimensions");
        ui->aspectRatio->addItem("Preserve aspect ratio and crop");
        ui->pixelRadio->setChecked(true);
        ui->aspectRatio->setDisabled(false);
    }else{
        ui->aspectRatio->addItem("Preserve aspect ratio");
        ui->aspectRatio->setDisabled(true);
        ui->percentageRadio->setChecked(true);
    }
}
