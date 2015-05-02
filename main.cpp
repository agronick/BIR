#include <QApplication>
#include <iostream>
#include <QDebug>
#include <QDir>
#include "bir.h"

void printHelp();
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    BIR w;
    QString loadDir = "";

    if(argc > 1)
    {
        QString arg = QString(argv[1]);
        if(arg == "--help" || arg == "-h")
        {
            printHelp();
            return 0;
        }


        QVector<QFileInfo> files;
        if(argc > 1)
        {
            for(int i = 1; i < argc; i++)
            {
                if(QDir(argv[i]).exists())
                {
                    QVector<QFileInfo> newFiles = w.buildListFromDir(argv[i]);
                    for(int j = 0; j < newFiles.count(); j++)
                    {
                        files.append(newFiles.at(j));
                    }
                }else if(QFile(argv[i]).exists())
                {
                    files.append(QFileInfo(argv[i]));
                }
            }
            w.populateLists(files);
        }
    }



    w.show();
    w.raise();

    if(loadDir != "")
    {
        std::cout << "\nLoading images...\n";\
        QVector<QFileInfo> info = w.buildListFromDir(argv[1]);
        w.populateLists(info);
    }


    return a.exec();
}

void printHelp()
{
   std::cout << QString("Usage kdre [FILE]... \nor kdre [DIRECTORY]...\nBatch image resizer. Allows you to supply a list of files or a directory and have\nall the images in it shrunk by a fixed amount or a percentage.\n\n").toStdString();
}
