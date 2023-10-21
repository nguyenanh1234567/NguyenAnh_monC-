#include <iostream>
using namespace std;

// Function prototype
int calculatePopulationSize(int startingSize, double birthRate, double deathRate, int arrivals, int departures);

int main() {
    int startingSize, numYears;
    double birthRate, deathRate;
    int arrivals, departures;

    cout << "Enter the starting size of the population: ";
    cin >> startingSize;

    if (startingSize < 2) {
        cout << "Starting size must be 2 or greater." << endl;
        return 1;
    }

    cout << "Enter the annual birth rate (as a percentage): ";
    cin >> birthRate;

    if (birthRate < 0) {
        cout << "Birth rate cannot be negative." << endl;
        return 1;
    }

    cout << "Enter the annual death rate (as a percentage): ";
    cin >> deathRate;

    if (deathRate < 0) {
        cout << "Death rate cannot be negative." << endl;
        return 1;
    }

    cout << "Enter the annual number of individuals who move into the area: ";
    cin >> arrivals;

    if (arrivals < 0) {
        cout << "Number of arrivals cannot be negative." << endl;
        return 1;
    }

    cout << "Enter the annual number of individuals who move out of the area: ";
    cin >> departures;

    if (departures < 0) {
        cout << "Number of departures cannot be negative." << endl;
        return 1;
    }

    cout << "Enter the number of years to project: ";
    cin >> numYears;

    if (numYears < 1) {
        cout << "Number of years must be 1 or greater." << endl;
        return 1;
    }

    for (int i = 1; i <= numYears; i++) {
        startingSize = calculatePopulationSize(startingSize, birthRate, deathRate, arrivals, departures);
        cout << "Year " << i << ": Population size = " << startingSize << endl;
    }

    return 0;
}

// Function to calculate population size for a year
int calculatePopulationSize(int startingSize, double birthRate, double deathRate, int arrivals, int departures) {
    return startingSize + (birthRate / 100 * startingSize) - (deathRate / 100 * startingSize) + arrivals - departures;
}