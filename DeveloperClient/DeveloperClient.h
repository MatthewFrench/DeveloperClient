#ifndef DEVELOPERCLIENT_H
#define DEVELOPERCLIENT_H
#include <Windows/ConfigWindow.h>
#include <Windows/LaunchWindow.h>
#include <Data.h>

class DeveloperClient
{
    LaunchWindow launchWindow;
    ConfigWindow configWindow;
public:
    DeveloperClient();
    void closeConfigWindow();
    Data data;
};

#endif // DEVELOPERCLIENT_H
