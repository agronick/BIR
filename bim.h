#ifndef KDRE_H
#define KDRE_H
#define CRP_CTR 0
#define CRP_TOP_LEFT  1
#define CRP_TOP_RIGHT 2
#define CRP_BOT_LEFT 3
#define CRP_BOT_RIGHT 4

#include <QMainWindow>
#include <QtGui/QPushButton>
#include <QVector>
#include <QFileInfo>
#include "selectitem.h"

namespace Ui {
class BIM;
}

class BIM : public QMainWindow
{
    Q_OBJECT

public:
    explicit BIM(QWidget *parent = 0);
    void populateLists(QVector<QFileInfo>);
    QVector<QFileInfo> buildListFromDir(QString);
    ~BIM();

private:
    Ui::BIM *ui;
    QPushButton *m_browse_in;
    QPushButton *m_browse_out;
    QStringList browseDialog(bool);
    void setNewDimensions(SelectItem*);
    void setNewDimensions();
    void setupAspectRatio(bool);
    QImage rotateImage(QImage*);
    QImage cropImage(QImage*, int, int);
    void pixelOff(bool);
    int getDiffDirIndex();
    QString getItemSubdir(SelectItem*, int);

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
    void aspectRatioChange(int);
};


#endif // KDRE_H
