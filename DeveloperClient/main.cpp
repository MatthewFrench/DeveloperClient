#include "developerclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DeveloperClient w;
    w.show();

    return a.exec();
}
