#include "LaunchWindow.h"
#include "ui_LaunchWindow.h"
#include <DeveloperClient.h>

LaunchWindow::LaunchWindow(DeveloperClient * devClient, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LaunchWindow)
{
    developerClient = devClient;
    ui->setupUi(this);

    this->setWindowFlags(Qt::WindowStaysOnTopHint);
}
LaunchWindow::~LaunchWindow()
{
    delete ui;
}

void LaunchWindow::on_playButton_clicked()
{

}
void LaunchWindow::on_actionConfigure_Locations_triggered()
{
    developerClient->showConfigWindow();
}

void LaunchWindow::on_actionOpen_Team_Window_triggered()
{
    developerClient->showTeamWindow();
}
