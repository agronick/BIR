#-------------------------------------------------
#
# Project created by QtCreator 2014-08-09T17:00:19
#
#-------------------------------------------------

QT       += core gui

QT += core

QMAKE_CXXFLAGS += -std=c++11


TARGET = KDRe
TEMPLATE = app
TARGET.EPOCHEAPSIZE = 0x020000 0x1000000

SOURCES += main.cpp\
        kdre.cpp \
    selectitem.cpp \
    dolphinmenu.cpp

HEADERS  += kdre.h \
    selectitem.h \
    dolphinmenu.h

FORMS    += kdre.ui

RESOURCES += \
    icon.qrc
