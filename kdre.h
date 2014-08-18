#ifndef KDRE_H
#define KDRE_H

#include <QMainWindow>
#include <QtGui/QPushButton>
#include <QVector>
#include <QFileInfo>
#include "selectitem.h"

namespace Ui {
class KDRe;
}

class KDRe : public QMainWindow
{
    Q_OBJECT

public:
    explicit KDRe(QWidget *parent = 0);
    ~KDRe();

private:
    Ui::KDRe *ui;
    QPushButton *m_browse_in;
    QPushButton *m_browse_out;
    QStringList browseDialog(bool);
    QVector<QFileInfo> buildListFromDir(QString);
    void populateLists(QVector<QFileInfo>);
    void setNewDimensions(SelectItem*);
    void setupAspectRatio(bool);

private slots:
    void browseInput();
    void browseOutput();
    void pixelResize();
    void ratioResize();
    void sliderMoved(int);
    void resetUi();
    void removeItem();
    void selectImage();
    void startResize();
};


#endif // KDRE_H
