#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables to store month names and rainfall amounts
    string month1, month2, month3;
    double rain1, rain2, rain3;

    // Prompt the user to enter the name of each month and the amount of rain
    cout << "Enter the name of the first month: ";
    cin >> month1;
    cout << "Enter the amount of rain (in inches) for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter the name of the second month: ";
    cin >> month2;
    cout << "Enter the amount of rain (in inches) for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter the name of the third month: ";
    cin >> month3;
    cout << "Enter the amount of rain (in inches) for " << month3 << ": ";
    cin >> rain3;

    // Calculate the average rainfall for the three months
    double averageRainfall = (rain1 + rain2 + rain3) / 3.0;

    // Display the average rainfall
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << averageRainfall << " inches." << endl;

    return 0;
}