/********************************************************************************
** Form generated from reading UI file 'kdre.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
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
#include <QtGui/QStackedWidget>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KDRe
{
public:
    QWidget *centralWidget;
    QPushButton *startResize;
    QToolButton *resetList;
    QProgressBar *progressBar;
    QGroupBox *groupBox;
    QLineEdit *outputFile;
    QPushButton *browseOut;
    QLabel *label_2;
    QLabel *titleIcon;
    QGroupBox *groupBox_2;
    QCheckBox *useDir;
    QCheckBox *useSubdirectories;
    QLineEdit *inputFile;
    QPushButton *browseIn;
    QGroupBox *groupBox_3;
    QLabel *label_10;
    QToolButton *removeItem;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_12;
    QListWidget *fileList;
    QTabWidget *tabWidget;
    QWidget *imageTab;
    QGroupBox *groupBox1;
    QRadioButton *pixelRadio;
    QRadioButton *percentageRadio;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *aspectRatio;
    QLabel *label_7;
    QComboBox *rotation;
    QLabel *label_8;
    QStackedWidget *sizeModePager;
    QWidget *page;
    QSlider *sizeSlider;
    QLabel *sliderLabel;
    QWidget *page_2;
    QLabel *label_3;
    QLineEdit *heightEdit;
    QLabel *label_4;
    QLineEdit *widthEdit;
    QComboBox *cropMode;
    QLabel *label;
    QWidget *fileTab;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KDRe)
    {
        if (KDRe->objectName().isEmpty())
            KDRe->setObjectName(QString::fromUtf8("KDRe"));
        KDRe->setEnabled(true);
        KDRe->resize(696, 582);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon"), QSize(), QIcon::Normal, QIcon::Off);
        KDRe->setWindowIcon(icon);
        KDRe->setWindowOpacity(1);
        KDRe->setAutoFillBackground(false);
        KDRe->setStyleSheet(QString::fromUtf8(""));
        KDRe->setUnifiedTitleAndToolBarOnMac(true);
        centralWidget = new QWidget(KDRe);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
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
        progressBar->setGeometry(QRect(10, 440, 671, 23));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(340, 70, 331, 91));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        outputFile = new QLineEdit(groupBox);
        outputFile->setObjectName(QString::fromUtf8("outputFile"));
        outputFile->setGeometry(QRect(10, 50, 221, 21));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(100);
        sizePolicy1.setHeightForWidth(outputFile->sizePolicy().hasHeightForWidth());
        outputFile->setSizePolicy(sizePolicy1);
        outputFile->setSizeIncrement(QSize(0, 100));
        browseOut = new QPushButton(groupBox);
        browseOut->setObjectName(QString::fromUtf8("browseOut"));
        browseOut->setGeometry(QRect(240, 50, 78, 25));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 111, 16));
        titleIcon = new QLabel(centralWidget);
        titleIcon->setObjectName(QString::fromUtf8("titleIcon"));
        titleIcon->setGeometry(QRect(10, 0, 661, 61));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(titleIcon->sizePolicy().hasHeightForWidth());
        titleIcon->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(20);
        titleIcon->setFont(font2);
        titleIcon->setAcceptDrops(false);
        titleIcon->setScaledContents(true);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 70, 311, 91));
        useDir = new QCheckBox(groupBox_2);
        useDir->setObjectName(QString::fromUtf8("useDir"));
        useDir->setGeometry(QRect(10, 30, 111, 20));
        useSubdirectories = new QCheckBox(groupBox_2);
        useSubdirectories->setObjectName(QString::fromUtf8("useSubdirectories"));
        useSubdirectories->setEnabled(false);
        useSubdirectories->setGeometry(QRect(130, 30, 131, 20));
        inputFile = new QLineEdit(groupBox_2);
        inputFile->setObjectName(QString::fromUtf8("inputFile"));
        inputFile->setGeometry(QRect(10, 50, 211, 21));
        browseIn = new QPushButton(groupBox_2);
        browseIn->setObjectName(QString::fromUtf8("browseIn"));
        browseIn->setGeometry(QRect(230, 50, 78, 25));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 150, 311, 281));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 250, 52, 14));
        removeItem = new QToolButton(groupBox_3);
        removeItem->setObjectName(QString::fromUtf8("removeItem"));
        removeItem->setGeometry(QRect(270, 240, 30, 24));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(150, 250, 52, 14));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 250, 52, 14));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(200, 250, 52, 14));
        fileList = new QListWidget(groupBox_3);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        fileList->setGeometry(QRect(10, 30, 291, 201));
        label_12->raise();
        removeItem->raise();
        label_11->raise();
        label_9->raise();
        fileList->raise();
        label_10->raise();
        label_10->raise();
        removeItem->raise();
        label_11->raise();
        label_9->raise();
        label_12->raise();
        fileList->raise();
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(340, 170, 331, 261));
        imageTab = new QWidget();
        imageTab->setObjectName(QString::fromUtf8("imageTab"));
        groupBox1 = new QGroupBox(imageTab);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        groupBox1->setGeometry(QRect(0, 0, 331, 231));
        sizePolicy.setHeightForWidth(groupBox1->sizePolicy().hasHeightForWidth());
        groupBox1->setSizePolicy(sizePolicy);
        pixelRadio = new QRadioButton(groupBox1);
        pixelRadio->setObjectName(QString::fromUtf8("pixelRadio"));
        pixelRadio->setGeometry(QRect(220, 20, 95, 21));
        percentageRadio = new QRadioButton(groupBox1);
        percentageRadio->setObjectName(QString::fromUtf8("percentageRadio"));
        percentageRadio->setGeometry(QRect(100, 20, 95, 21));
        percentageRadio->setChecked(true);
        label_5 = new QLabel(groupBox1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 20, 81, 16));
        label_6 = new QLabel(groupBox1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 80, 111, 16));
        aspectRatio = new QComboBox(groupBox1);
        aspectRatio->setObjectName(QString::fromUtf8("aspectRatio"));
        aspectRatio->setGeometry(QRect(10, 100, 301, 22));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(aspectRatio->sizePolicy().hasHeightForWidth());
        aspectRatio->setSizePolicy(sizePolicy3);
        label_7 = new QLabel(groupBox1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 180, 71, 16));
        rotation = new QComboBox(groupBox1);
        rotation->setObjectName(QString::fromUtf8("rotation"));
        rotation->setGeometry(QRect(10, 200, 301, 22));
        sizePolicy3.setHeightForWidth(rotation->sizePolicy().hasHeightForWidth());
        rotation->setSizePolicy(sizePolicy3);
        label_8 = new QLabel(groupBox1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 130, 301, 16));
        sizeModePager = new QStackedWidget(groupBox1);
        sizeModePager->setObjectName(QString::fromUtf8("sizeModePager"));
        sizeModePager->setGeometry(QRect(10, 40, 311, 41));
        sizeModePager->setFrameShape(QFrame::StyledPanel);
        sizeModePager->setFrameShadow(QFrame::Plain);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        sizeSlider = new QSlider(page);
        sizeSlider->setObjectName(QString::fromUtf8("sizeSlider"));
        sizeSlider->setGeometry(QRect(0, 10, 261, 20));
        sizeSlider->setMinimum(2);
        sizeSlider->setMaximum(100);
        sizeSlider->setValue(100);
        sizeSlider->setOrientation(Qt::Horizontal);
        sliderLabel = new QLabel(page);
        sliderLabel->setObjectName(QString::fromUtf8("sliderLabel"));
        sliderLabel->setGeometry(QRect(270, 10, 41, 16));
        sizeModePager->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 10, 55, 15));
        heightEdit = new QLineEdit(page_2);
        heightEdit->setObjectName(QString::fromUtf8("heightEdit"));
        heightEdit->setEnabled(false);
        heightEdit->setGeometry(QRect(190, 10, 61, 21));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 10, 55, 15));
        widthEdit = new QLineEdit(page_2);
        widthEdit->setObjectName(QString::fromUtf8("widthEdit"));
        widthEdit->setEnabled(false);
        widthEdit->setGeometry(QRect(40, 10, 61, 21));
        widthEdit->setReadOnly(false);
        sizeModePager->addWidget(page_2);
        label_3->raise();
        label_3->raise();
        heightEdit->raise();
        label_4->raise();
        widthEdit->raise();
        cropMode = new QComboBox(groupBox1);
        cropMode->setObjectName(QString::fromUtf8("cropMode"));
        cropMode->setEnabled(false);
        cropMode->setGeometry(QRect(10, 150, 301, 22));
        label = new QLabel(groupBox1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 130, 121, 20));
        QFont font3;
        font3.setPointSize(8);
        label->setFont(font3);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tabWidget->addTab(imageTab, QString());
        fileTab = new QWidget();
        fileTab->setObjectName(QString::fromUtf8("fileTab"));
        checkBox = new QCheckBox(fileTab);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 10, 181, 20));
        lineEdit = new QLineEdit(fileTab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(10, 30, 301, 22));
        checkBox_2 = new QCheckBox(fileTab);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 70, 291, 20));
        checkBox_3 = new QCheckBox(fileTab);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 110, 301, 20));
        checkBox_3->setChecked(true);
        tabWidget->addTab(fileTab, QString());
        KDRe->setCentralWidget(centralWidget);
        startResize->raise();
        resetList->raise();
        progressBar->raise();
        titleIcon->raise();
        groupBox->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        tabWidget->raise();
        menuBar = new QMenuBar(KDRe);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 696, 19));
        KDRe->setMenuBar(menuBar);
        mainToolBar = new QToolBar(KDRe);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        KDRe->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(KDRe);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        KDRe->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label_8->setBuddy(cropMode);
        sliderLabel->setBuddy(sizeSlider);
#endif // QT_NO_SHORTCUT

        retranslateUi(KDRe);
        QObject::connect(widthEdit, SIGNAL(textChanged(QString)), label_10, SLOT(setText(QString)));
        QObject::connect(heightEdit, SIGNAL(textChanged(QString)), label_12, SLOT(setText(QString)));
        QObject::connect(useDir, SIGNAL(toggled(bool)), useSubdirectories, SLOT(setEnabled(bool)));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), lineEdit, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);
        sizeModePager->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(KDRe);
    } // setupUi

    void retranslateUi(QMainWindow *KDRe)
    {
        KDRe->setWindowTitle(QApplication::translate("KDRe", "KDRe - Bulk Image Resizer", 0, QApplication::UnicodeUTF8));
        startResize->setText(QApplication::translate("KDRe", "Start", 0, QApplication::UnicodeUTF8));
        resetList->setText(QApplication::translate("KDRe", "Reset", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("KDRe", "File Info", 0, QApplication::UnicodeUTF8));
        browseOut->setText(QApplication::translate("KDRe", "Browse", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("KDRe", "Output Directory", 0, QApplication::UnicodeUTF8));
        titleIcon->setText(QApplication::translate("KDRe", "KDRe - Batch image resizer", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("KDRe", "Add file or directory", 0, QApplication::UnicodeUTF8));
        useDir->setText(QApplication::translate("KDRe", "Select directory", 0, QApplication::UnicodeUTF8));
        useSubdirectories->setText(QApplication::translate("KDRe", "Use subdirectories", 0, QApplication::UnicodeUTF8));
        browseIn->setText(QApplication::translate("KDRe", "Browse", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("KDRe", "File List", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        removeItem->setText(QApplication::translate("KDRe", "-", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("KDRe", "Height:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("KDRe", "Width:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QString());
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
        label_8->setText(QApplication::translate("KDRe", "Crop", 0, QApplication::UnicodeUTF8));
        sliderLabel->setText(QApplication::translate("KDRe", "100%", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("KDRe", "Width", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("KDRe", "Height", 0, QApplication::UnicodeUTF8));
        cropMode->clear();
        cropMode->insertItems(0, QStringList()
         << QApplication::translate("KDRe", "Crop to Center", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KDRe", "Crop to Top Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KDRe", "Crop to Top Right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KDRe", "Crop to Bottom Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("KDRe", "Crop to Bottom Right", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("KDRe", "(Requires aspect ratio)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(imageTab), QApplication::translate("KDRe", "Image Settings", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("KDRe", "Append text to file name", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("KDRe", "Preserve directory structure", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("KDRe", "Overwrite files if they exist", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(fileTab), QApplication::translate("KDRe", "File Settings", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KDRe: public Ui_KDRe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KDRE_H
