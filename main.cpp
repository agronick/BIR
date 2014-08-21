#include "kdre.h"
#include <QApplication>
#include "dolphinmenu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KDRe w;
    w.show();

    DolphinMenu install;
    install.start();

    return a.exec();
}
