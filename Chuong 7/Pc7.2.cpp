#include <iostream>
using namespace std;

int main() {
    const int MONTHS = 12;
    double rainfall[MONTHS];
    double totalRainfall = 0;
    double averageRainfall;
    double highestRainfall = 0;
    double lowestRainfall = 10000; // Initialize to a high value

    cout << "Enter the monthly rainfall for each of the 12 months." << endl;

    for (int i = 0; i < MONTHS; i++) {
        cout << "Month " << (i + 1) << ": ";
        cin >> rainfall[i];

        while (rainfall[i] < 0) {
            cout << "Rainfall cannot be negative. Enter a valid value: ";
            cin >> rainfall[i];
        }

        totalRainfall += rainfall[i];

        if (rainfall[i] > highestRainfall) {
            highestRainfall = rainfall[i];
        }
        if (rainfall[i] < lowestRainfall) {
            lowestRainfall = rainfall[i];
        }
    }

    averageRainfall = totalRainfall / MONTHS;

    cout << "Total rainfall for the year: " << totalRainfall << " inches" << endl;
    cout << "Average monthly rainfall: " << averageRainfall << " inches" << endl;
    cout << "Month with the highest amount of rainfall: " << highestRainfall << " inches" << endl;
    cout << "Month with the lowest amount of rainfall: " << lowestRainfall << " inches" << endl;

    return 0;
}