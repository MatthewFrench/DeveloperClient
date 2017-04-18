#include "DeveloperClient.h"

DeveloperClient::DeveloperClient() :
    launchWindow(this), configWindow(this)
{
    launchWindow.show();
    configWindow.show();
}
