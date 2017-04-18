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
}

ConfigWindow::~ConfigWindow()
{
    delete ui;
}

void ConfigWindow::show() {
    verifyPaths();

    ui->leagueGameText->setText(developerClient->data.getLeagueLocation());
    ui->leagueSandboxText->setText(developerClient->data.getSandboxLocation());


}

void ConfigWindow::verifyPaths() {
    if (ui->leagueGameText->text().length() == 0 && ui->leagueSandboxText->text().length() == 0) {
ui->statusBar->showMessage("Need LeagueSandbox GameServer repository and League of Legends game locations.");
    } else if (ui->leagueGameText->text().length() == 0) {
ui->statusBar->showMessage("Need League of Legends game location");
    } else if (ui->leagueSandboxText->text().length() == 0) {
        ui->statusBar->showMessage("Need LeagueSandbox GameServer repository location");
    } else {
        ui->statusBar->showMessage("");
    }
}

void ConfigWindow::on_sandboxRepoButton_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                "/",
                                                QFileDialog::ShowDirsOnly
                                                | QFileDialog::DontResolveSymlinks);
    ui->leagueSandboxText->setText(dir);
    verifyPaths();
}

void ConfigWindow::on_leagueClientButton_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                "/",
                                                QFileDialog::ShowDirsOnly
                                                | QFileDialog::DontResolveSymlinks);

    ui->leagueGameText->setText(dir);
    verifyPaths();
}

void ConfigWindow::on_saveButton_clicked()
{
    verifyPaths();
    developerClient->data.setLeagueLocation(ui->leagueGameText->text());
    developerClient->data.setSandboxLocation(ui->leagueSandboxText->text());
    developerClient->closeConfigWindow();
}
