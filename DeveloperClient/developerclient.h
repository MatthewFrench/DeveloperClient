#ifndef DEVELOPERCLIENT_H
#define DEVELOPERCLIENT_H

#include <QMainWindow>

namespace Ui {
class DeveloperClient;
}

class DeveloperClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeveloperClient(QWidget *parent = 0);
    ~DeveloperClient();

private:
    Ui::DeveloperClient *ui;
};

#endif // DEVELOPERCLIENT_H
