#ifndef IMAGE_H
#define IMAGE_H

#include <QImage>

class Image : public QImage
{
    Q_OBJECT
public:
    explicit Image(QObject *parent = 0);

signals:

public slots:

};

#endif // IMAGE_H
