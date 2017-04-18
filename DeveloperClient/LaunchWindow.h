#ifndef LAUNCHWINDOW_H
#define LAUNCHWINDOW_H

#include <QMainWindow>

class DeveloperClient;

namespace Ui {
class LaunchWindow;
}

class LaunchWindow : public QMainWindow
{
    Q_OBJECT

    DeveloperClient* developerClient;

public:
    explicit LaunchWindow(DeveloperClient * devClient, QWidget *parent = 0);
    ~LaunchWindow();

private:
    Ui::LaunchWindow *ui;
};

#endif // LAUNCHWINDOW_H
