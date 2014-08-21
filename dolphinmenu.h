#ifndef DOLPHINMENU_H
#define DOLPHINMENU_H

#include <QThread>

class DolphinMenu : public QThread
{
    Q_OBJECT
public:
    explicit DolphinMenu(QObject *parent = 0);

signals:

public slots:

protected:
    void run();
};

#endif // DOLPHINMENU_H
