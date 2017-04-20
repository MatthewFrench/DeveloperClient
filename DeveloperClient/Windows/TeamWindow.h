#ifndef TEAMWINDOW_H
#define TEAMWINDOW_H

#include <QMainWindow>

class DeveloperClient;

namespace Ui {
class TeamWindow;
}

class TeamWindow : public QMainWindow
{
    Q_OBJECT

    DeveloperClient* developerClient;

public:
    explicit TeamWindow(DeveloperClient * devClient, QWidget *parent = 0);
    ~TeamWindow();

private:
    Ui::TeamWindow *ui;
};

#endif // TEAMWINDOW_H
