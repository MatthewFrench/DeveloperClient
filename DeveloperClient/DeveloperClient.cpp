#include "DeveloperClient.h"

DeveloperClient::DeveloperClient() :
    launchWindow(this), configWindow(this)
{
    launchWindow.show();

    if (data.areLocationsSet() == false) {
        configWindow.show();
    }
}

void DeveloperClient::closeConfigWindow() {
    configWindow.close();
}
