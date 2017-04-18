#ifndef DEVELOPERCLIENT_H
#define DEVELOPERCLIENT_H
#include <Windows/ConfigWindow.h>
#include <Windows/LaunchWindow.h>

class DeveloperClient
{
    LaunchWindow launchWindow;
    ConfigWindow configWindow;
public:
    DeveloperClient();
};

#endif // DEVELOPERCLIENT_H
