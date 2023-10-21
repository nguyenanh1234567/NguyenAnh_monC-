#include <iostream>
using namespace std;

// Function prototype
int calculatePopulationSize(int startingSize, double birthRate, double deathRate, int years);

int main() {
    int startingSize, years;
    double birthRate, deathRate;

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

    cout << "Enter the number of years to display: ";
    cin >> years;

    if (years < 1) {
        cout << "Number of years must be 1 or greater." << endl;
        return 1;
    }

    for (int i = 1; i <= years; i++) {
        startingSize = calculatePopulationSize(startingSize, birthRate, deathRate, 1);
        cout << "Year " << i << ": Population size = " << startingSize << endl;
    }

    return 0;
}

// Function to calculate population size for a year
int calculatePopulationSize(int startingSize, double birthRate, double deathRate, int years) {
    return startingSize + (birthRate / 100 * startingSize) - (deathRate / 100 * startingSize);
}