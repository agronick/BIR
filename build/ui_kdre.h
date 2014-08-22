/********************************************************************************
** Form generated from reading UI file 'kdre.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KDRE_H
#define UI_KDRE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KDRe
{
public:
    QWidget *centralWidget;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *widthEdit;
    QLineEdit *heightEdit;
    QGroupBox *groupBox;
    QLabel *sliderLabel;
    QRadioButton *pixelRadio;
    QRadioButton *percentageRadio;
    QSlider *sizeSlider;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *aspectRatio;
    QLabel *label_7;
    QComboBox *rotation;
    QPushButton *startResize;
    QToolButton *resetList;
    QProgressBar *progressBar;
    QGroupBox *groupBox1;
    QLineEdit *outputFile;
    QPushButton *browseOut;
    QLabel *label_2;
    QListWidget *fileList;
    QToolButton *removeItem;
    QLabel *label;
    QLabel *titleIcon;
    QLineEdit *inputFile;
    QPushButton *browseIn;
    QLabel *inDirLabel;
    QCheckBox *useDir;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KDRe)
    {
        if (KDRe->objectName().isEmpty())
            KDRe->setObjectName(QString::fromUtf8("KDRe"));
        KDRe->resize(695, 582);
        KDRe->setUnifiedTitleAndToolBarOnMac(true);
        centralWidget = new QWidget(KDRe);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 390, 55, 15));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(510, 390, 55, 15));
        widthEdit = new QLineEdit(centralWidget);
        widthEdit->setObjectName(QString::fromUtf8("widthEdit"));
        widthEdit->setEnabled(false);
        widthEdit->setGeometry(QRect(410, 390, 61, 21));
        widthEdit->setReadOnly(false);
        heightEdit = new QLineEdit(centralWidget);
        heightEdit->setObjectName(QString::fromUtf8("heightEdit"));
        heightEdit->setEnabled(false);
        heightEdit->setGeometry(QRect(560, 390, 61, 21));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 200, 331, 211));
        sliderLabel = new QLabel(groupBox);
        sliderLabel->setObjectName(QString::fromUtf8("sliderLabel"));
        sliderLabel->setGeometry(QRect(270, 50, 55, 15));
        pixelRadio = new QRadioButton(groupBox);
        pixelRadio->setObjectName(QString::fromUtf8("pixelRadio"));
        pixelRadio->setGeometry(QRect(220, 20, 95, 21));
        percentageRadio = new QRadioButton(groupBox);
        percentageRadio->setObjectName(QString::fromUtf8("percentageRadio"));
        percentageRadio->setGeometry(QRect(100, 20, 95, 21));
        percentageRadio->setChecked(true);
        sizeSlider = new QSlider(groupBox);
        sizeSlider->setObjectName(QString::fromUtf8("sizeSlider"));
        sizeSlider->setGeometry(QRect(10, 50, 221, 20));
        sizeSlider->setMinimum(2);
        sizeSlider->setMaximum(100);
        sizeSlider->setValue(100);
        sizeSlider->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 81, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 100, 111, 16));
        aspectRatio = new QComboBox(groupBox);
        aspectRatio->setObjectName(QString::fromUtf8("aspectRatio"));
        aspectRatio->setGeometry(QRect(10, 120, 301, 22));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 150, 71, 16));
        rotation = new QComboBox(groupBox);
        rotation->setObjectName(QString::fromUtf8("rotation"));
        rotation->setGeometry(QRect(10, 170, 301, 22));
        startResize = new QPushButton(centralWidget);
        startResize->setObjectName(QString::fromUtf8("startResize"));
        startResize->setGeometry(QRect(350, 470, 101, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        startResize->setFont(font);
        resetList = new QToolButton(centralWidget);
        resetList->setObjectName(QString::fromUtf8("resetList"));
        resetList->setGeometry(QRect(260, 470, 81, 31));
        QFont font1;
        font1.setPointSize(12);
        resetList->setFont(font1);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(10, 430, 671, 23));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        groupBox1 = new QGroupBox(centralWidget);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        groupBox1->setGeometry(QRect(10, 70, 331, 111));
        outputFile = new QLineEdit(groupBox1);
        outputFile->setObjectName(QString::fromUtf8("outputFile"));
        outputFile->setGeometry(QRect(10, 50, 221, 21));
        browseOut = new QPushButton(groupBox1);
        browseOut->setObjectName(QString::fromUtf8("browseOut"));
        browseOut->setGeometry(QRect(240, 50, 78, 25));
        label_2 = new QLabel(groupBox1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 111, 16));
        fileList = new QListWidget(centralWidget);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        fileList->setGeometry(QRect(370, 180, 311, 201));
        removeItem = new QToolButton(centralWidget);
        removeItem->setObjectName(QString::fromUtf8("removeItem"));
        removeItem->setGeometry(QRect(650, 390, 30, 24));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 160, 55, 15));
        titleIcon = new QLabel(centralWidget);
        titleIcon->setObjectName(QString::fromUtf8("titleIcon"));
        titleIcon->setGeometry(QRect(10, 0, 661, 61));
        QFont font2;
        font2.setPointSize(20);
        titleIcon->setFont(font2);
        inputFile = new QLineEdit(centralWidget);
        inputFile->setObjectName(QString::fromUtf8("inputFile"));
        inputFile->setGeometry(QRect(370, 100, 221, 21));
        browseIn = new QPushButton(centralWidget);
        browseIn->setObjectName(QString::fromUtf8("browseIn"));
        browseIn->setGeometry(QRect(600, 100, 78, 25));
        inDirLabel = new QLabel(centralWidget);
        inDirLabel->setObjectName(QString::fromUtf8("inDirLabel"));
        inDirLabel->setGeometry(QRect(370, 80, 221, 16));
        useDir = new QCheckBox(centralWidget);
        useDir->setObjectName(QString::fromUtf8("useDir"));
        useDir->setGeometry(QRect(370, 120, 101, 20));
        KDRe->setCentralWidget(centralWidget);
        groupBox->raise();
        groupBox->raise();
        label_3->raise();
        label_4->raise();
        widthEdit->raise();
        heightEdit->raise();
        startResize->raise();
        resetList->raise();
        progressBar->raise();
        fileList->raise();
        removeItem->raise();
        label->raise();
        titleIcon->raise();
        inputFile->raise();
        browseIn->raise();
        inDirLabel->raise();
        useDir->raise();
        menuBar = new QMenuBar(KDRe);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 695, 19));
        KDRe->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KDRe);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        KDRe->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KDRe);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        KDRe->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        sliderLabel->setBuddy(sizeSlider);
#endif // QT_NO_SHORTCUT

        retranslateUi(KDRe);

        QMetaObject::connectSlotsByName(KDRe);
    } // setupUi

    void retranslateUi(QMainWindow *KDRe)
    {
        KDRe->setWindowTitle(QApplication::translate("KDRe", "KDRe - Bulk Image Resizer", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("KDRe", "Width", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("KDRe", "Height", 0, QApplication::UnicodeUTF8));
        sliderLabel->setText(QApplication::translate("KDRe", "100%", 0, QApplication::UnicodeUTF8));
        pixelRadio->setText(QApplication::translate("KDRe", "Size", 0, QApplication::UnicodeUTF8));
        percentageRadio->setText(QApplication::translate("KDRe", "Percentage", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("KDRe", "Resize by", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("KDRe", "Aspect Ratio", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("KDRe", "Rotation", 0, QApplication::UnicodeUTF8));
        rotation->clear();
        rotation->insertItems(0, QStringList()
         << QApplication::translate("KDRe", "0\302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KDRe", "90\302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KDRe", "180\302\260", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KDRe", "270\302\260", 0, QApplication::UnicodeUTF8)
        );
        startResize->setText(QApplication::translate("KDRe", "Start", 0, QApplication::UnicodeUTF8));
        resetList->setText(QApplication::translate("KDRe", "Reset", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("KDRe", "File Info", 0, QApplication::UnicodeUTF8));
        browseOut->setText(QApplication::translate("KDRe", "Browse", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("KDRe", "Output Directory", 0, QApplication::UnicodeUTF8));
        removeItem->setText(QApplication::translate("KDRe", "-", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("KDRe", "File List", 0, QApplication::UnicodeUTF8));
        titleIcon->setText(QApplication::translate("KDRe", "KDRe - Batch image resizer", 0, QApplication::UnicodeUTF8));
        browseIn->setText(QApplication::translate("KDRe", "Browse", 0, QApplication::UnicodeUTF8));
        inDirLabel->setText(QApplication::translate("KDRe", "Add file or directory", 0, QApplication::UnicodeUTF8));
        useDir->setText(QApplication::translate("KDRe", "Use directory", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KDRe: public Ui_KDRe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KDRE_H
