#include "kdre.h"
#include "ui_kdre.h"
#include "QFileDialog"
#include "QDebug"
#include <QVector>
#include <QDirIterator>
#include <QListWidgetItem>
#include "selectitem.h"
#include <QWidgetItem>
#include <QTransform>


KDRe::KDRe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KDRe)
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

    ui->titleIcon->setStyleSheet("background-image: url(:/icon/icon); background-repeat:no-repeat; padding-left: 70px");

    QIntValidator* numeric = new QIntValidator(0, 10000, this);
    ui->heightEdit->setValidator(numeric);
    ui->widthEdit->setValidator(numeric);
}



KDRe::~KDRe()
{
    delete ui;
}

void KDRe::browseInput()
{
    QStringList dir = browseDialog(true);
    if(dir.isEmpty())
        return;

    ui->inputFile->setText(dir[0]);

    if(ui->outputFile->text() == "" && QDir(dir[0]).exists())
        ui->outputFile->setText(dir[0]);


    for(QString item : dir)
    {
        if(QDir(item).exists())
        {
            populateLists(buildListFromDir(item));
        }else{
            QVector<QFileInfo> file;
            file.append(QFileInfo(item));
            this->populateLists(file);
        }
    }
}

void KDRe::browseOutput()
{
    QStringList dirl = browseDialog(false);

    if(dirl.isEmpty())
        return;

    ui->outputFile->setText(dirl[0]);
}

QVector<QFileInfo> KDRe::buildListFromDir(QString dir)
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


QStringList KDRe::browseDialog(bool isInput)
{
    QFileDialog *dialog = new QFileDialog(this);


    dialog->setFileMode(ui->useDir->isChecked() || !isInput ? QFileDialog::Directory : QFileDialog::ExistingFiles);

    int result = dialog->exec();

    QStringList directory;

    if (result)
        directory = dialog->selectedFiles();

    delete dialog;
    return directory;
}


void KDRe::populateLists(QVector<QFileInfo> items)
{
    QString extensions[] = {"png", "jpg", "gif"};

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

        for(int j=0; j < 3; j++)
        {
            qDebug() << "check " + extensions[j] + " equal to " + items.at(i).suffix().toLower();
            if(items.at(i).suffix().toLower() == extensions[j]) //Check if the item is not already there
            {
                fileItem = new SelectItem(path);
                fileItem->setText(name);
                ui->fileList->addItem(fileItem);
            }
        }

        ui->progressBar->setValue((i / (float)items.count()) * 100.0);
    }
    ui->progressBar->setValue(0);
}


void KDRe::pixelResize()
{
    pixelOff(true);
}

void KDRe::ratioResize()
{
    pixelOff(false);
}

void KDRe::pixelOff(bool on)
{
    ui->widthEdit->setEnabled(on);
    ui->heightEdit->setEnabled(on);
    ui->cropMode->setEnabled(on);
    ui->sizeModePager->setCurrentIndex(on ? 1 : 0);
    setupAspectRatio(on);
}

void KDRe::sliderMoved(int value)
{
    ui->sliderLabel->setText(QString::number(value).append("%"));
    selectImage();
}

void KDRe::resetUi()
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

void KDRe::aspectRatioChange(int item)
{
    ui->cropMode->setEnabled(item == 2);
}

void KDRe::removeItem()
{
    ui->fileList->takeItem(ui->fileList->currentRow());
}

void KDRe::selectImage()
{
    SelectItem * item = dynamic_cast<SelectItem *>(ui->fileList->currentItem());
    if(item == NULL)
        return;

    if(ui->percentageRadio->isChecked())
    {
        KDRe::setNewDimensions(item);
    //    qDebug()<< QString::number(item->width()) + "Row: " + QString::number(ui->fileList->currentRow());
        ui->widthEdit->setText(QString::number(item->newWidth));
        ui->heightEdit->setText(QString::number(item->newHeight));
    }
}

void KDRe::setNewDimensions(SelectItem* item)
{
    float ratio = ui->sizeSlider->value() * 0.01;
    item->newWidth = (item->width() * ratio);
    item->newHeight = (item->height() * ratio);
}

void KDRe::startResize()
{
    int dirDiffIndex = -1;

    if(!QDir(ui->outputFile->text()).exists())
        return;

    //Get this ahead of time because the difference between directories does not need
    //to be found with each file
    if(ui->dirStruct->isChecked())
        dirDiffIndex = getDiffDirIndex();

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

        //Rotate Image
        if(ui->rotation->currentIndex() != 0)
        {
            image = this->rotateImage(&image);
        }

        //Resize Image
        image = image.scaled(item->newWidth, item->newHeight, aspectRatio, Qt::SmoothTransformation);

        //Crop Image
        if(ui->aspectRatio->currentIndex() == 2)
        {
            image = this->cropImage(&image, item->newWidth, item->newHeight);
        }

        //Save Image
        QString subDir = getItemSubdir(item, dirDiffIndex);
        image.save(subDir + item->text());

        ui->progressBar->setValue((i / (float)ui->fileList->count()) * 100.0);
    }
    ui->progressBar->setValue(0);
}

void KDRe::setNewDimensions()
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

QImage KDRe::rotateImage(QImage* image)
{
    int deg = (ui->rotation->currentIndex() * 90);

    QTransform transform;
    transform.rotate(deg);
    return image->transformed(transform);
}

QImage KDRe::cropImage(QImage * image, int width, int height)
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

QString KDRe::getItemSubdir(SelectItem* item, int diffIndex)
{
    if(diffIndex < 1)
        ui->outputFile->text();

     QString dir =  QFileInfo(item->path).absoluteDir().absolutePath();
     dir = ui->outputFile->text() + dir.remove(0, diffIndex);
     QDir(dir).mkdir(dir);
     return dir + "/";
}

int KDRe::getDiffDirIndex()
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
            qDebug() << "index: " <<  index << " " << thisFile.at(index + 1)  << "|" <<  lastFile.at(index + 1) << " limit:" << limit;
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

void KDRe::setupAspectRatio(bool pixelResize)
{
    ui->aspectRatio->clear();
    if(pixelResize)
    {
        ui->aspectRatio->addItem("Ignore aspect ratio");
        ui->aspectRatio->addItem("Preserve aspect ratio inside dimensions");
        ui->aspectRatio->addItem("Preserve aspect ratio and crop");
        ui->pixelRadio->setChecked(true);
    }else{
        ui->aspectRatio->addItem("Preserve aspect ratio");
        ui->percentageRadio->setChecked(true);
    }
}
