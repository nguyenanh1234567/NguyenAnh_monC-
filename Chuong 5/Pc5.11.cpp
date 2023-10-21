#include <iostream>
using namespace std;

int main() {
    int startingPopulation, days;
    double dailyIncrease;

    // Get the starting population, daily increase, and number of days
    cout << "Enter the starting number of organisms: ";
    cin >> startingPopulation;

    if (startingPopulation < 2) {
        cout << "Starting population must be at least 2." << endl;
        return 1;
    }

    cout << "Enter the average daily population increase (as a percentage): ";
    cin >> dailyIncrease;

    if (dailyIncrease < 0) {
        cout << "Average daily increase cannot be negative." << endl;
        return 1;
    }

    cout << "Enter the number of days they will multiply: ";
    cin >> days;

    if (days < 1) {
        cout << "Number of days must be at least 1." << endl;
        return 1;
    }

    // Display the population for each day
    cout << "Day 1: " << startingPopulation << " organisms" << endl;
    for (int day = 2; day <= days; day++) {
        startingPopulation += (startingPopulation * dailyIncrease / 100);
        cout << "Day " << day << ": " << startingPopulation << " organisms" << endl;
    }

    return 0;
}