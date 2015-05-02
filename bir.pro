#-------------------------------------------------
#
# Project created by QtCreator 2014-08-09T17:00:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += core

QMAKE_CXXFLAGS += -std=c++11


TARGET = bir
TEMPLATE = app
TARGET.EPOCHEAPSIZE = 0x020000 0x1000000


INSTALLS += target desktop

SOURCES += main.cpp\
        bir.cpp \
    selectitem.cpp

HEADERS  += bir.h \
    selectitem.h

FORMS    += bir.ui

RESOURCES += \
    icon.qrc

desktopfile.files = bir.desktop
desktopfile.path = /usr/share/applications
icon.files = bir80.png
icon.path = /usr/share/icons/hicolor/80x80/apps 
desktop.path = /usr/share/applications
target.path = /usr/bin
