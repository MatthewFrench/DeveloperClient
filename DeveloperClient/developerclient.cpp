#include "developerclient.h"
#include "ui_developerclient.h"

DeveloperClient::DeveloperClient(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeveloperClient)
{
    ui->setupUi(this);
}

DeveloperClient::~DeveloperClient()
{
    delete ui;
}
