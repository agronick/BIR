/********************************************************************************
** Form generated from reading UI file 'bir.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIR_H
#define UI_BIR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BIR
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *titleIcon;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *addFiles;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *useDir;
    QCheckBox *useSubdirectories;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *inputFile;
    QPushButton *browseIn;
    QGroupBox *fileInfo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *outputFile;
    QPushButton *browseOut;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *fileList_2;
    QVBoxLayout *verticalLayout;
    QListWidget *fileList;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *widthLabel;
    QLabel *label_11;
    QLabel *heightLabel;
    QToolButton *removeAll;
    QToolButton *removeItem;
    QTabWidget *tabWidget;
    QWidget *imageTab;
    QComboBox *cropMode;
    QLabel *label_7;
    QLabel *label_6;
    QStackedWidget *sizeModePager;
    QWidget *page;
    QSlider *sizeSlider;
    QLabel *sliderLabel;
    QWidget *page_2;
    QLabel *label_3;
    QLineEdit *heightEdit;
    QLabel *label_4;
    QLineEdit *widthEdit;
    QLabel *label;
    QComboBox *rotation;
    QLabel *label_5;
    QComboBox *aspectRatio;
    QRadioButton *percentageRadio;
    QLabel *label_8;
    QRadioButton *pixelRadio;
    QLabel *label_10;
    QWidget *fileTab;
    QCheckBox *appendFileChk;
    QLineEdit *appendFileTxt;
    QCheckBox *dirStruct;
    QCheckBox *deleteExisting;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *resetList;
    QPushButton *startResize;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BIR)
    {
        if (BIR->objectName().isEmpty())
            BIR->setObjectName(QStringLiteral("BIR"));
        BIR->setEnabled(true);
        BIR->resize(690, 592);
        BIR->setMinimumSize(QSize(690, 592));
        BIR->setMaximumSize(QSize(16777215, 10000000));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon"), QSize(), QIcon::Normal, QIcon::Off);
        BIR->setWindowIcon(icon);
        BIR->setWindowOpacity(1);
        BIR->setAutoFillBackground(false);
        BIR->setStyleSheet(QStringLiteral(""));
        BIR->setUnifiedTitleAndToolBarOnMac(true);
        centralWidget = new QWidget(BIR);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        titleIcon = new QLabel(centralWidget);
        titleIcon->setObjectName(QStringLiteral("titleIcon"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleIcon->sizePolicy().hasHeightForWidth());
        titleIcon->setSizePolicy(sizePolicy);
        titleIcon->setMinimumSize(QSize(3, 49));
        titleIcon->setMaximumSize(QSize(16777215, 49));
        QFont font;
        font.setPointSize(1);
        font.setBold(false);
        font.setWeight(50);
        titleIcon->setFont(font);
        titleIcon->setAcceptDrops(false);
        titleIcon->setStyleSheet(QStringLiteral("background-image: url(:/icon/icon); background-repeat:no-repeat; padding-left: 50px"));
        titleIcon->setTextFormat(Qt::RichText);
        titleIcon->setScaledContents(true);
        titleIcon->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        titleIcon->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout_4->addWidget(titleIcon);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        addFiles = new QGroupBox(centralWidget);
        addFiles->setObjectName(QStringLiteral("addFiles"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addFiles->sizePolicy().hasHeightForWidth());
        addFiles->setSizePolicy(sizePolicy1);
        addFiles->setMinimumSize(QSize(0, 93));
        verticalLayout_3 = new QVBoxLayout(addFiles);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        useDir = new QCheckBox(addFiles);
        useDir->setObjectName(QStringLiteral("useDir"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(useDir->sizePolicy().hasHeightForWidth());
        useDir->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(useDir);

        useSubdirectories = new QCheckBox(addFiles);
        useSubdirectories->setObjectName(QStringLiteral("useSubdirectories"));
        useSubdirectories->setEnabled(false);
        sizePolicy2.setHeightForWidth(useSubdirectories->sizePolicy().hasHeightForWidth());
        useSubdirectories->setSizePolicy(sizePolicy2);

        horizontalLayout_9->addWidget(useSubdirectories);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, 0);
        inputFile = new QLineEdit(addFiles);
        inputFile->setObjectName(QStringLiteral("inputFile"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(inputFile->sizePolicy().hasHeightForWidth());
        inputFile->setSizePolicy(sizePolicy3);
        inputFile->setMinimumSize(QSize(0, 21));

        horizontalLayout_8->addWidget(inputFile);

        browseIn = new QPushButton(addFiles);
        browseIn->setObjectName(QStringLiteral("browseIn"));
        sizePolicy2.setHeightForWidth(browseIn->sizePolicy().hasHeightForWidth());
        browseIn->setSizePolicy(sizePolicy2);
        browseIn->setMinimumSize(QSize(0, 21));

        horizontalLayout_8->addWidget(browseIn);


        verticalLayout_3->addLayout(horizontalLayout_8);


        horizontalLayout_3->addWidget(addFiles);

        fileInfo = new QGroupBox(centralWidget);
        fileInfo->setObjectName(QStringLiteral("fileInfo"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(fileInfo->sizePolicy().hasHeightForWidth());
        fileInfo->setSizePolicy(sizePolicy4);
        fileInfo->setMinimumSize(QSize(346, 78));
        verticalLayout_2 = new QVBoxLayout(fileInfo);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(fileInfo);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        outputFile = new QLineEdit(fileInfo);
        outputFile->setObjectName(QStringLiteral("outputFile"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(100);
        sizePolicy5.setHeightForWidth(outputFile->sizePolicy().hasHeightForWidth());
        outputFile->setSizePolicy(sizePolicy5);
        outputFile->setSizeIncrement(QSize(0, 100));

        horizontalLayout_2->addWidget(outputFile);

        browseOut = new QPushButton(fileInfo);
        browseOut->setObjectName(QStringLiteral("browseOut"));

        horizontalLayout_2->addWidget(browseOut);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addWidget(fileInfo);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout_4->setContentsMargins(-1, 3, -1, 3);
        fileList_2 = new QGroupBox(centralWidget);
        fileList_2->setObjectName(QStringLiteral("fileList_2"));
        sizePolicy.setHeightForWidth(fileList_2->sizePolicy().hasHeightForWidth());
        fileList_2->setSizePolicy(sizePolicy);
        fileList_2->setMinimumSize(QSize(311, 0));
        fileList_2->setMaximumSize(QSize(741, 16777215));
        verticalLayout = new QVBoxLayout(fileList_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        fileList = new QListWidget(fileList_2);
        fileList->setObjectName(QStringLiteral("fileList"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(67);
        sizePolicy6.setHeightForWidth(fileList->sizePolicy().hasHeightForWidth());
        fileList->setSizePolicy(sizePolicy6);
        fileList->setAcceptDrops(true);

        verticalLayout->addWidget(fileList);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        label_9 = new QLabel(fileList_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_9);

        widthLabel = new QLabel(fileList_2);
        widthLabel->setObjectName(QStringLiteral("widthLabel"));

        horizontalLayout_5->addWidget(widthLabel);

        label_11 = new QLabel(fileList_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_11);

        heightLabel = new QLabel(fileList_2);
        heightLabel->setObjectName(QStringLiteral("heightLabel"));

        horizontalLayout_5->addWidget(heightLabel);

        removeAll = new QToolButton(fileList_2);
        removeAll->setObjectName(QStringLiteral("removeAll"));
        removeAll->setEnabled(false);
        removeAll->setStyleSheet(QStringLiteral(""));
        removeAll->setIconSize(QSize(27, 27));

        horizontalLayout_5->addWidget(removeAll);

        removeItem = new QToolButton(fileList_2);
        removeItem->setObjectName(QStringLiteral("removeItem"));
        removeItem->setEnabled(false);
        removeItem->setStyleSheet(QStringLiteral(""));
        removeItem->setIconSize(QSize(27, 27));

        horizontalLayout_5->addWidget(removeItem);


        verticalLayout->addLayout(horizontalLayout_5);


        horizontalLayout_4->addWidget(fileList_2);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        sizePolicy4.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy4);
        tabWidget->setMinimumSize(QSize(346, 268));
        tabWidget->setMaximumSize(QSize(16777215, 233));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setTabsClosable(false);
        imageTab = new QWidget();
        imageTab->setObjectName(QStringLiteral("imageTab"));
        cropMode = new QComboBox(imageTab);
        cropMode->setObjectName(QStringLiteral("cropMode"));
        cropMode->setEnabled(false);
        cropMode->setGeometry(QRect(10, 150, 301, 22));
        label_7 = new QLabel(imageTab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 180, 71, 16));
        label_6 = new QLabel(imageTab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 80, 111, 16));
        sizeModePager = new QStackedWidget(imageTab);
        sizeModePager->setObjectName(QStringLiteral("sizeModePager"));
        sizeModePager->setGeometry(QRect(10, 30, 311, 41));
        sizeModePager->setFrameShape(QFrame::StyledPanel);
        sizeModePager->setFrameShadow(QFrame::Plain);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        sizeSlider = new QSlider(page);
        sizeSlider->setObjectName(QStringLiteral("sizeSlider"));
        sizeSlider->setGeometry(QRect(10, 10, 251, 20));
        sizeSlider->setMinimum(2);
        sizeSlider->setMaximum(100);
        sizeSlider->setValue(100);
        sizeSlider->setOrientation(Qt::Horizontal);
        sliderLabel = new QLabel(page);
        sliderLabel->setObjectName(QStringLiteral("sliderLabel"));
        sliderLabel->setGeometry(QRect(270, 10, 41, 16));
        sizeModePager->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 10, 55, 15));
        heightEdit = new QLineEdit(page_2);
        heightEdit->setObjectName(QStringLiteral("heightEdit"));
        heightEdit->setEnabled(false);
        heightEdit->setGeometry(QRect(220, 10, 61, 21));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 10, 55, 15));
        widthEdit = new QLineEdit(page_2);
        widthEdit->setObjectName(QStringLiteral("widthEdit"));
        widthEdit->setEnabled(false);
        widthEdit->setGeometry(QRect(70, 10, 61, 21));
        widthEdit->setReadOnly(false);
        sizeModePager->addWidget(page_2);
        label = new QLabel(imageTab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 130, 151, 20));
        QFont font1;
        font1.setPointSize(8);
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rotation = new QComboBox(imageTab);
        rotation->setObjectName(QStringLiteral("rotation"));
        rotation->setGeometry(QRect(10, 200, 301, 22));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(rotation->sizePolicy().hasHeightForWidth());
        rotation->setSizePolicy(sizePolicy7);
        label_5 = new QLabel(imageTab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 81, 16));
        aspectRatio = new QComboBox(imageTab);
        aspectRatio->setObjectName(QStringLiteral("aspectRatio"));
        aspectRatio->setEnabled(false);
        aspectRatio->setGeometry(QRect(10, 100, 301, 22));
        sizePolicy7.setHeightForWidth(aspectRatio->sizePolicy().hasHeightForWidth());
        aspectRatio->setSizePolicy(sizePolicy7);
        percentageRadio = new QRadioButton(imageTab);
        percentageRadio->setObjectName(QStringLiteral("percentageRadio"));
        percentageRadio->setGeometry(QRect(100, 10, 95, 21));
        percentageRadio->setChecked(true);
        label_8 = new QLabel(imageTab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 130, 131, 16));
        pixelRadio = new QRadioButton(imageTab);
        pixelRadio->setObjectName(QStringLiteral("pixelRadio"));
        pixelRadio->setGeometry(QRect(220, 10, 95, 21));
        label_10 = new QLabel(imageTab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(160, 180, 151, 20));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        QIcon icon1;
        QString iconThemeName = QStringLiteral("applications-graphics");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        tabWidget->addTab(imageTab, icon1, QString());
        label_7->raise();
        label_6->raise();
        sizeModePager->raise();
        label->raise();
        rotation->raise();
        label_5->raise();
        aspectRatio->raise();
        percentageRadio->raise();
        label_8->raise();
        pixelRadio->raise();
        cropMode->raise();
        label_10->raise();
        fileTab = new QWidget();
        fileTab->setObjectName(QStringLiteral("fileTab"));
        appendFileChk = new QCheckBox(fileTab);
        appendFileChk->setObjectName(QStringLiteral("appendFileChk"));
        appendFileChk->setGeometry(QRect(10, 10, 181, 20));
        appendFileTxt = new QLineEdit(fileTab);
        appendFileTxt->setObjectName(QStringLiteral("appendFileTxt"));
        appendFileTxt->setEnabled(false);
        appendFileTxt->setGeometry(QRect(10, 30, 301, 22));
        dirStruct = new QCheckBox(fileTab);
        dirStruct->setObjectName(QStringLiteral("dirStruct"));
        dirStruct->setGeometry(QRect(10, 70, 291, 20));
        dirStruct->setCheckable(true);
        dirStruct->setChecked(false);
        deleteExisting = new QCheckBox(fileTab);
        deleteExisting->setObjectName(QStringLiteral("deleteExisting"));
        deleteExisting->setGeometry(QRect(10, 110, 301, 20));
        deleteExisting->setChecked(true);
        QIcon icon2;
        iconThemeName = QStringLiteral("image-x-generic");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(""), QSize(), QIcon::Normal, QIcon::Off);
        }
        tabWidget->addTab(fileTab, icon2, QString());

        horizontalLayout_4->addWidget(tabWidget);

        horizontalLayout_4->setStretch(0, 1);

        verticalLayout_4->addLayout(horizontalLayout_4);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(true);
        sizePolicy3.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy3);
        progressBar->setMaximumSize(QSize(16777215, 16777215));
        progressBar->setValue(0);
        progressBar->setTextVisible(true);

        verticalLayout_4->addWidget(progressBar);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(220, 13, 220, -1);
        resetList = new QToolButton(centralWidget);
        resetList->setObjectName(QStringLiteral("resetList"));
        QSizePolicy sizePolicy8(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(resetList->sizePolicy().hasHeightForWidth());
        resetList->setSizePolicy(sizePolicy8);
        QFont font2;
        font2.setPointSize(12);
        resetList->setFont(font2);

        horizontalLayout_6->addWidget(resetList);

        startResize = new QPushButton(centralWidget);
        startResize->setObjectName(QStringLiteral("startResize"));
        sizePolicy8.setHeightForWidth(startResize->sizePolicy().hasHeightForWidth());
        startResize->setSizePolicy(sizePolicy8);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        startResize->setFont(font3);

        horizontalLayout_6->addWidget(startResize);


        verticalLayout_4->addLayout(horizontalLayout_6);

        BIR->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BIR);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 690, 19));
        BIR->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BIR);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BIR->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BIR);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BIR->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        sliderLabel->setBuddy(sizeSlider);
        label_8->setBuddy(cropMode);
#endif // QT_NO_SHORTCUT

        retranslateUi(BIR);
        QObject::connect(useDir, SIGNAL(toggled(bool)), useSubdirectories, SLOT(setEnabled(bool)));
        QObject::connect(appendFileChk, SIGNAL(toggled(bool)), appendFileTxt, SLOT(setEnabled(bool)));
        QObject::connect(removeAll, SIGNAL(released()), fileList, SLOT(clear()));

        tabWidget->setCurrentIndex(0);
        sizeModePager->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BIR);
    } // setupUi

    void retranslateUi(QMainWindow *BIR)
    {
        BIR->setWindowTitle(QApplication::translate("BIR", "BIR - Batch Image Resizer", 0));
        titleIcon->setText(QApplication::translate("BIR", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">BIR</span><br/><span style=\" font-size:9pt;\">Batch Image Resizer</span></p></body></html>", 0));
        addFiles->setTitle(QApplication::translate("BIR", "Add file or directory", 0));
        useDir->setText(QApplication::translate("BIR", "Select directory", 0));
        useSubdirectories->setText(QApplication::translate("BIR", "Use subdirectories", 0));
        browseIn->setText(QApplication::translate("BIR", "Browse", 0));
        fileInfo->setTitle(QApplication::translate("BIR", "File Info", 0));
        label_2->setText(QApplication::translate("BIR", "Output Directory", 0));
        browseOut->setText(QApplication::translate("BIR", "Browse", 0));
        fileList_2->setTitle(QApplication::translate("BIR", "File List", 0));
        label_9->setText(QApplication::translate("BIR", "Width:", 0));
        widthLabel->setText(QString());
        label_11->setText(QApplication::translate("BIR", "Height:", 0));
        heightLabel->setText(QString());
        removeAll->setText(QString());
        removeItem->setText(QString());
        cropMode->clear();
        cropMode->insertItems(0, QStringList()
         << QApplication::translate("BIR", "Crop to Center", 0)
         << QApplication::translate("BIR", "Crop to Top Left", 0)
         << QApplication::translate("BIR", "Crop to Top Right", 0)
         << QApplication::translate("BIR", "Crop to Bottom Left", 0)
         << QApplication::translate("BIR", "Crop to Bottom Right", 0)
        );
        label_7->setText(QApplication::translate("BIR", "Rotation", 0));
        label_6->setText(QApplication::translate("BIR", "Aspect Ratio", 0));
        sliderLabel->setText(QApplication::translate("BIR", "100%", 0));
        label_3->setText(QApplication::translate("BIR", "Width", 0));
        label_4->setText(QApplication::translate("BIR", "Height", 0));
        label->setText(QApplication::translate("BIR", "(Requires aspect ratio)", 0));
        rotation->clear();
        rotation->insertItems(0, QStringList()
         << QApplication::translate("BIR", "0\302\260", 0)
         << QApplication::translate("BIR", "90\302\260", 0)
         << QApplication::translate("BIR", "180\302\260", 0)
         << QApplication::translate("BIR", "270\302\260", 0)
        );
        label_5->setText(QApplication::translate("BIR", "Resize by", 0));
        percentageRadio->setText(QApplication::translate("BIR", "Percentage", 0));
        label_8->setText(QApplication::translate("BIR", "Crop", 0));
        pixelRadio->setText(QApplication::translate("BIR", "Size", 0));
        label_10->setText(QApplication::translate("BIR", "(After resizing)", 0));
        tabWidget->setTabText(tabWidget->indexOf(imageTab), QApplication::translate("BIR", "Image Settings", 0));
        appendFileChk->setText(QApplication::translate("BIR", "Prepend text to file name", 0));
        dirStruct->setText(QApplication::translate("BIR", "Preserve directory structure", 0));
        deleteExisting->setText(QApplication::translate("BIR", "Overwrite files if they exist", 0));
        tabWidget->setTabText(tabWidget->indexOf(fileTab), QApplication::translate("BIR", "File Settings", 0));
        resetList->setText(QApplication::translate("BIR", "Reset", 0));
        startResize->setText(QApplication::translate("BIR", "Start", 0));
    } // retranslateUi

};

namespace Ui {
    class BIR: public Ui_BIR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIR_H
