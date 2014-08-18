#include "selectitem.h"
#include <QDebug>;
#include <QImage>

int newHeight;
int newWidth;


SelectItem::SelectItem(QString filePath): path(filePath)
{
    QImage img;
    img.load(path);

    oldWidth = img.width();
    oldHeight = img.height();


}

QImage* SelectItem::getImage()
{
    QImage img;
    if(img.load(this->path))
    {
        return &img;
    }else{
        return 0;
    }
}

int SelectItem::width()
{
    return oldWidth;
}

int SelectItem::height()
{
    return oldHeight;
}





