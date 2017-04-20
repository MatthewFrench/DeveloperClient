#include "TeamWindow.h"
#include "ui_TeamWindow.h"

TeamWindow::TeamWindow(DeveloperClient * devClient, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TeamWindow)
{
    developerClient = devClient;
    ui->setupUi(this);
}

TeamWindow::~TeamWindow()
{
    delete ui;
}
