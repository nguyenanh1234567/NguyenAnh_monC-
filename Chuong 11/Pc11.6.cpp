#include <iostream>
#include <string>
using namespace std;

struct Player {
    string name;
    int number;
    int points;
};

int main() {
    Player team[12];

    for (int i = 0; i < 12; i++) {
        cout << "Enter player data for Player " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> team[i].name;
        cout << "Number: ";
        cin >> team[i].number;
        cout << "Points Scored: ";
        cin >> team[i].points;
    }

    int totalPoints = 0;
    int highestPoints = 0;
    string highestScorer;

    cout << "Player Data:\n";
    cout << "Number   Name            Points\n";
    for (int i = 0; i < 12; i++) {
        cout << team[i].number << "   " << team[i].name << "   " << team[i].points << endl;
        totalPoints += team[i].points;

        if (team[i].points > highestPoints) {
            highestPoints = team[i].points;
            highestScorer = team[i].name;
        }
    }

    cout << "Total Points Earned by the Team: " << totalPoints << endl;
    cout << "Player with the Most Points: " << highestScorer << " (" << highestPoints << " points)\n";

    return 0;
}