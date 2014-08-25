#-------------------------------------------------
#
# Project created by QtCreator 2014-08-09T17:00:19
#
#-------------------------------------------------

QT       += core gui

QT += core

QMAKE_CXXFLAGS += -std=c++11


TARGET = kdre
TEMPLATE = app
TARGET.EPOCHEAPSIZE = 0x020000 0x1000000


INSTALLS += target desktop

SOURCES += main.cpp\
        kdre.cpp \
    selectitem.cpp

HEADERS  += kdre.h \
    selectitem.h

FORMS    += kdre.ui

RESOURCES += \
    icon.qrc


target.path = /usr/local/bin
desktop.path = /usr/share/applications
desktop.files += kdre.desktop
