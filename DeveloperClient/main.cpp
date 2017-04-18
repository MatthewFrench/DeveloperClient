#include "ConfigWindow.h"
#include "LaunchWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    LaunchWindow lw;
    ConfigWindow w;
    lw.show();
    w.show();

    return a.exec();
}
