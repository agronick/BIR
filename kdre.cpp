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
    ui->percentageRadio->click();

    ui->titleIcon->setStyleSheet("background-image: url(:/icon/icon); background-repeat:no-repeat; padding-left: 70px");

}



KDRe::~KDRe()
{
    delete ui;
}

void KDRe::browseInput()
{
    QStringList dir = KDRe::browseDialog(true);
    if(dir.isEmpty())
        return;

    ui->inputFile->setText(dir[0]);

    if(ui->outputFile->text() == "" && QDir(dir[0]).exists())
        ui->outputFile->setText(dir[0]);


    for(QString item : dir)
    {
        if(QDir(item).exists())
        {
            KDRe::populateLists(KDRe::buildListFromDir(item));
        }else{
            QVector<QFileInfo> file;
            file.append(QFileInfo(item));
            this->populateLists(file);
        }
    }
}

void KDRe::browseOutput()
{
    QStringList dirl = KDRe::browseDialog(false);

    if(dirl.isEmpty())
        return;

    ui->outputFile->setText(dirl[0]);
}

QVector<QFileInfo> KDRe::buildListFromDir(QString dir)
{


    QVector<QFileInfo> files;
    QDirIterator dirIt(dir, QDirIterator::NoIteratorFlags);
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
        QList<QListWidgetItem*> list = ui->fileList->findItems(path, Qt::MatchContains);

        for(int j=0; j < 3; j++)
        {
            qDebug() << "check " + extensions[j] + " equal to " + items.at(i).suffix().toLower();
            if(items.at(i).suffix().toLower() == extensions[j]) //Check if the item is not already there
            {
                fileItem = new SelectItem(path);
                fileItem->setText(items.at(i).fileName());
                ui->fileList->addItem(fileItem);
            }
        }

        ui->progressBar->setValue((i / (float)items.count()) * 100.0);
    }
    ui->progressBar->setValue(0);
}

void KDRe::pixelResize()
{
    ui->heightEdit->setEnabled(true);
    ui->widthEdit->setEnabled(true);
    ui->sizeSlider->setVisible(false);
    ui->sliderLabel->setVisible(false);
    KDRe::setupAspectRatio(true);
}

void KDRe::ratioResize()
{
    ui->widthEdit->setEnabled(false);
    ui->heightEdit->setEnabled(false);
    ui->sizeSlider->setVisible(true);
    ui->sliderLabel->setVisible(true);
    KDRe::setupAspectRatio(false);
}

void KDRe::sliderMoved(int value)
{
    ui->sliderLabel->setText(QString::number(value).append("%"));
    KDRe::selectImage();
}

void KDRe::resetUi()
{
    ui->fileList->clear();
    ui->inputFile->setText("");
    ui->outputFile->setText("");
    ui->rotation->setCurrentIndex(0);
    ui->aspectRatio->setCurrentIndex(0);
    ui->useDir->setChecked(false);
    ui->widthEdit->setText("");
    ui->heightEdit->setText("");
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
    if(!QDir(ui->outputFile->text()).exists())
        return;

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
            aspectRatio = Qt::KeepAspectRatioByExpanding;
    }

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

    for(int i = 0; i < ui->fileList->count(); i ++)
    {
        item = dynamic_cast<SelectItem *>(ui->fileList->item(i));
        image = QImage(item->path).scaled(item->newWidth, item->newHeight, aspectRatio, Qt::SmoothTransformation);

        if(ui->rotation->currentIndex() != 0)
        {
            image = this->rotateImage(&image);
        }

        image.save(ui->outputFile->text() + "/" + item->text());

        ui->progressBar->setValue((i / (float)ui->fileList->count()) * 100.0);
    }
    ui->progressBar->setValue(0);
}

QImage KDRe::rotateImage(QImage* image)
{
    int deg = (ui->rotation->currentIndex() * 90);

    QTransform transform;
    transform.rotate(deg);
    return image->transformed(transform);
}

void KDRe::setupAspectRatio(bool pixelResize)
{
    ui->aspectRatio->clear();
    if(pixelResize)
    {
        ui->aspectRatio->addItem("Ignore aspect ratio");
        ui->aspectRatio->addItem("Preserve aspect ratio and use smaller dimension");
        ui->aspectRatio->addItem("Preserve aspect ratio and use larger dimension");
    }else{
        ui->aspectRatio->addItem("Preserve aspect ratio");
    }
}