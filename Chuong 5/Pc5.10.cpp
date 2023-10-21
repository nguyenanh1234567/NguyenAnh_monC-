#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numYears;
    double totalRainfall = 0.0;

    cout << "Enter the number of years: ";
    cin >> numYears;

    if (numYears < 1) {
        cout << "Invalid input. Please enter a number of years greater than or equal to 1." << endl;
        return 1;
    }

    for (int year = 1; year <= numYears; year++) {
        for (int month = 1; month <= 12; month++) {
            double monthlyRainfall;
            cout << "Enter inches of rainfall for year " << year << ", month " << month << ": ";
            cin >> monthlyRainfall;

            if (monthlyRainfall < 0) {
                cout << "Invalid input. Rainfall cannot be negative." << endl;
                return 1;
            }

            totalRainfall += monthlyRainfall;
        }
    }

    int totalMonths = numYears * 12;
    double averageRainfall = totalRainfall / totalMonths;

    cout << "Number of months: " << totalMonths << endl;
    cout << "Total inches of rainfall: " << fixed << setprecision(2) << totalRainfall << " inches" << endl;
    cout << "Average monthly rainfall: " << fixed << setprecision(2) << averageRainfall << " inches" << endl;

    return 0;
}