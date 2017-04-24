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

private slots:
    void on_playButton_clicked();

    void on_actionConfigure_Locations_triggered();

    void on_actionOpen_Team_Window_triggered();

private:
    Ui::LaunchWindow *ui;
};

#endif // LAUNCHWINDOW_H
