#ifndef CONFIGWINDOW_H
#define CONFIGWINDOW_H

#include <QMainWindow>

class DeveloperClient;

namespace Ui {
class ConfigWindow;
}

class ConfigWindow : public QMainWindow
{
    Q_OBJECT

    DeveloperClient* developerClient;

public:
    explicit ConfigWindow(DeveloperClient *devClient ,QWidget *parent = 0);
    ~ConfigWindow();

private slots:
    void on_sandboxRepoButton_clicked();

    void on_leagueClientButton_clicked();

private:
    Ui::ConfigWindow *ui;
};

#endif
