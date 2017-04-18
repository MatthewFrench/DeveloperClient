#ifndef DATA_H
#define DATA_H

#include <QSettings>

class Data
{
    QSettings settings;
    QString leagueLocation, sandboxRepoLocation;
public:
    Data();
    void saveData();
    bool areLocationsSet();
    void setLeagueLocation(QString loc);
    void setSandboxLocation(QString loc);
    QString getLeagueLocation();
    QString getSandboxLocation();
};

#endif // DATA_H
