#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double SENIOR_EXEMPTION = 5000.0;
    
    double actualValue, assessedValue, taxRate, annualTax, quarterlyTax;

    // Input the actual value and tax rate
    cout << "Enter the actual value of the property: $";
    cin >> actualValue;
    cout << "Enter the tax rate for each $100 of assessed value: ";
    cin >> taxRate;

    // Calculate the assessed value and annual tax
    assessedValue = actualValue * 0.6; // 60% of actual value
    annualTax = (assessedValue - SENIOR_EXEMPTION) / 100.0 * taxRate;

    // Calculate the quarterly tax bill
    quarterlyTax = annualTax / 4;

    // Display the annual and quarterly tax
    cout << fixed << setprecision(2);
    cout << "Annual Property Tax: $" << annualTax << endl;
    cout << "Quarterly Tax Bill: $" << quarterlyTax << " (4 equal payments)" << endl;

    return 0;
}