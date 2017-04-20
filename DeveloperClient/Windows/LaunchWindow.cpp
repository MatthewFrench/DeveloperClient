#include "LaunchWindow.h"
#include "ui_LaunchWindow.h"
#include <DeveloperClient.h>

LaunchWindow::LaunchWindow(DeveloperClient * devClient, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LaunchWindow)
{
    developerClient = devClient;
    ui->setupUi(this);

    ui->statusbar->showMessage("Click Play to launch League of Legends and League Sandbox");

    this->setWindowFlags(Qt::WindowStaysOnTopHint);
}
LaunchWindow::~LaunchWindow()
{
    delete ui;
}

void LaunchWindow::on_playButton_clicked()
{

}

void LaunchWindow::on_openTeamButton_clicked()
{
    developerClient->showTeamWindow();
}

void LaunchWindow::on_configureLocationsButton_clicked()
{
    developerClient->showConfigWindow();
}
