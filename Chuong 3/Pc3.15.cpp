#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double ASSESSMENT_PERCENT = 0.6; // Assessment value is 60% of the actual value
    const double PROPERTY_TAX_RATE = 0.0075; // Property tax rate is 0.75% (75¢ for each $100)

    double actualValue, assessmentValue, propertyTax;

    // Input the actual value of the property
    cout << "Enter the actual value of the property: $";
    cin >> actualValue;

    // Calculate the assessment value and property tax
    assessmentValue = actualValue * ASSESSMENT_PERCENT;
    propertyTax = assessmentValue * PROPERTY_TAX_RATE;

    // Display the assessment value and property tax
    cout << fixed << setprecision(2); // Display currency with two decimal places
    cout << "Assessment Value: $" << assessmentValue << endl;
    cout << "Property Tax: $" << propertyTax << endl;

    return 0;
}