#ifndef DEVELOPERCLIENT_H
#define DEVELOPERCLIENT_H
#include <Windows/ConfigWindow.h>
#include <Windows/LaunchWindow.h>
#include <Windows/TeamWindow.h>
#include <Data.h>
#include <QtDebug>

class DeveloperClient
{
    LaunchWindow launchWindow;
    ConfigWindow configWindow;
    TeamWindow teamWindow;
public:
    DeveloperClient();
    void showConfigWindow();
    void closeConfigWindow();
    void showTeamWindow();
    void closeTeamWindow();
    Data data;
};

#endif // DEVELOPERCLIENT_H
