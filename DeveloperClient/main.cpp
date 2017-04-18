#include <QApplication>
#include <DeveloperClient.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DeveloperClient developerClient;

    return a.exec();
}
