#ifndef LAUNCHWINDOW_H
#define LAUNCHWINDOW_H

#include <QMainWindow>

namespace Ui {
class LaunchWindow;
}

class LaunchWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LaunchWindow(QWidget *parent = 0);
    ~LaunchWindow();

private:
    Ui::LaunchWindow *ui;
};

#endif // LAUNCHWINDOW_H
