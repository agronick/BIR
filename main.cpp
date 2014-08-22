#include "kdre.h"
#include <QApplication>
#include <iostream>
#include "dolphinmenu.h"
#include <QDebug>
#include <QDir>

void printHelp();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    KDRe w;
    QString loadDir = "";

    if(argc > 1)
    {
        QString arg = QString(argv[1]);
        if(arg == "--help" || arg == "-h")
        {
            printHelp();
            return 0;
        }else if(QString(argv[1][0]) == "/" && QDir(QString(argv[1])).exists())
        {
            loadDir = argv[1];
        }else if(QString(argv[1][0]) == "./")
        {
            loadDir = argv[0];
        }else{
            for(int i = 1; i < argc; i++)
            {

            }
        }
    }


    w.show();
    w.raise();

    if(loadDir != "")
    {
        std::cout << "\nLoading images...\n";\
        w.populateLists(w.buildListFromDir(argv[1]));
    }

    DolphinMenu install;
    install.start();

    return a.exec();
}

void printHelp()
{
   std::cout << QString("Usage kdre [FILE]... \nor kdre [DIRECTORY]...\nBatch image resizer. Allows you to supply a list of files or a directory and have\nall the images in it shrunk by a fixed amount or a percentage.\n\n").toAscii().data();
}
