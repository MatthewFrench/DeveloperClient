#include "DeveloperClient.h"

DeveloperClient::DeveloperClient() :
    launchWindow(this), configWindow(this), teamWindow(this)
{
    launchWindow.show();

    showTeamWindow();

    launchWindow.activateWindow();

    if (data.areLocationsSet() == false) {
        configWindow.show();
    }
}

void DeveloperClient::showConfigWindow() {
    configWindow.show();
}

void DeveloperClient::closeConfigWindow() {
    configWindow.close();
}

void DeveloperClient::showTeamWindow() {
    teamWindow.setGeometry(launchWindow.geometry().left() - teamWindow.geometry().width(),
                           launchWindow.geometry().top(), teamWindow.geometry().width(),
                           teamWindow.geometry().height());

    teamWindow.show();
}

void DeveloperClient::closeTeamWindow() {
    teamWindow.close();
}
