#include "LaunchWindow.h"
#include "ui_LaunchWindow.h"

LaunchWindow::LaunchWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LaunchWindow)
{
    ui->setupUi(this);

    ui->statusbar->showMessage("Hello");
}

LaunchWindow::~LaunchWindow()
{
    delete ui;
}
