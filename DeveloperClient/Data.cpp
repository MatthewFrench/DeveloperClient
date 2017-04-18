#include "Data.h"

Data::Data() : settings("DeveloperClient.ini", QSettings::IniFormat)
{
    leagueLocation = settings.value("League Location", "").toString();
    sandboxRepoLocation = settings.value("Sandbox Location", "").toString();
}
void Data::saveData() {
    settings.setValue("League Location", leagueLocation);
    settings.setValue("Sandbox Location", sandboxRepoLocation);
}

bool Data::areLocationsSet() {
    return leagueLocation.length() > 0 && sandboxRepoLocation.length() > 0;
}
void Data::setLeagueLocation(QString loc) {
    leagueLocation = loc;
}
void Data::setSandboxLocation(QString loc) {
    sandboxRepoLocation = loc;
}
QString Data::getLeagueLocation() {
    return leagueLocation;
}
QString Data::getSandboxLocation() {
    return sandboxRepoLocation;
}
