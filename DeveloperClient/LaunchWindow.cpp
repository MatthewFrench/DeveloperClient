#include "LaunchWindow.h"
#include "ui_LaunchWindow.h"
#include <DeveloperClient.h>

LaunchWindow::LaunchWindow(DeveloperClient * devClient, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LaunchWindow)
{
    developerClient = devClient;
    ui->setupUi(this);

    ui->statusbar->showMessage("Hello");
}
LaunchWindow::~LaunchWindow()
{
    delete ui;
}
