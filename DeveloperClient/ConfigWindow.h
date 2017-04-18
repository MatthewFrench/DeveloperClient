#ifndef CONFIGWINDOW_H
#define CONFIGWINDOW_H

#include <QMainWindow>

namespace Ui {
class ConfigWindow;
}

class ConfigWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ConfigWindow(QWidget *parent = 0);
    ~ConfigWindow();

private slots:
    void on_sandboxRepoButton_clicked();

    void on_leagueClientButton_clicked();

private:
    Ui::ConfigWindow *ui;
};

#endif
