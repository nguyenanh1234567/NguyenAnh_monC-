#include <iostream>
using namespace std;

int main() {
    // Constants
    const double INSURANCE_PERCENTAGE = 0.80; // 80% coverage

    // Variables
    double replacementCost;
    double minimumInsurance;

    // Input
    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    // Calculate the minimum amount of insurance
    minimumInsurance = replacementCost * INSURANCE_PERCENTAGE;

    // Display the result
    cout << "You should buy at least $" << minimumInsurance << " in insurance coverage." << endl;

    return 0;
}