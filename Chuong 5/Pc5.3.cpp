#include <iostream>
using namespace std;

int main() {
    const double annualRise = 1.5; // Ocean's annual rise in millimeters
    int years = 25; // Number of years to display

    cout << "Year\tMillimeters Risen" << endl;
    cout << "-----------------------" << endl;

    for (int year = 1; year <= years; year++) {
        double totalRise = annualRise * year;
        cout << year << "\t" << totalRise << endl;
    }

    return 0;
}