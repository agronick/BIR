#-------------------------------------------------
#
# Project created by QtCreator 2014-08-09T17:00:19
#
#-------------------------------------------------

QT       += core gui

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


target.path = /usr/local/bin
desktop.path = /usr/share/applications
desktop.files += bir.desktop
