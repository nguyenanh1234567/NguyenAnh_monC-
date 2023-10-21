#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main() {
    ifstream teamsFile("Teams.txt");
    ifstream winnersFile("WorldSeriesWinners.txt");

    if (!teamsFile || !winnersFile) {
        cerr << "Error opening input files." << endl;
        return 1;
    }

    map<string, int> worldSeriesWins;

    // Read team names from Teams.txt
    string teamName;
    while (getline(teamsFile, teamName)) {
        worldSeriesWins[teamName] = 0; // Initialize wins to 0
    }

    // Read winners from WorldSeriesWinners.txt
    string winner;
    while (getline(winnersFile, winner)) {
        if (worldSeriesWins.find(winner) != worldSeriesWins.end()) {
            worldSeriesWins[winner]++;
        }
    }

    // Prompt the user for a team name
    string userTeam;
    cout << "Enter the name of a team: ";
    getline(cin, userTeam);

    // Check if the team exists in the map
    if (worldSeriesWins.find(userTeam) != worldSeriesWins.end()) {
        int wins = worldSeriesWins[userTeam];
        cout << userTeam << " won the World Series " << wins << " times from 1903 to 2012." << endl;
    } else {
        cout << "The entered team is not in the list of World Series winners." << endl;
    }

    teamsFile.close();
    winnersFile.close();

    return 0;
}