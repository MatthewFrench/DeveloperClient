#include "Data.h"

Data::Data() : settings("DeveloperClient", QSettings::IniFormat)
{
    leagueLocation = settings.value("League Location", "").toString();
    sandboxRepoLocation = settings.value("Sandbox Location", "").toString();
}
void Data::saveData() {

}

bool Data::areLocationsSet() {
    return leagueLocation != "" && sandboxRepoLocation != "";
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
