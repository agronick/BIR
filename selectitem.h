#ifndef FILELIST_H
#define FILELIST_H

#include <QListWidgetItem>
#include <QImage>

class SelectItem : public QObject, public QListWidgetItem
{
public:
    int newWidth;
    int newHeight;

    int oldHeight;
    int oldWidth;

    QString path;

    using QListWidgetItem::setText;
    using QListWidgetItem::text;
    SelectItem(QString);
    QImage* getImage();
    int width();
    int height();
    void doNothing();
};

#endif // FILELIST_H
