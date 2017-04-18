#include "ConfigWindow.h"
#include "ui_ConfigWindow.h"
#include <QFileDialog>
#include <DeveloperClient.h>

ConfigWindow::ConfigWindow(DeveloperClient* devClient, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ConfigWindow)
{
    developerClient = devClient;

    ui->setupUi(this);

    ui->statusBar->showMessage("Need LeagueSandbox GameServer repository and League of Legends game locations.");
}

ConfigWindow::~ConfigWindow()
{
    delete ui;
}

void ConfigWindow::on_sandboxRepoButton_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                "/",
                                                QFileDialog::ShowDirsOnly
                                                | QFileDialog::DontResolveSymlinks);
    ui->leagueSandboxText->setText(dir);
}

void ConfigWindow::on_leagueClientButton_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                "/",
                                                QFileDialog::ShowDirsOnly
                                                | QFileDialog::DontResolveSymlinks);

    ui->leagueGameText->setText(dir);
}
