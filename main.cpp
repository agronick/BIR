#include "kdre.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KDRe w;
    w.show();

    return a.exec();
}
