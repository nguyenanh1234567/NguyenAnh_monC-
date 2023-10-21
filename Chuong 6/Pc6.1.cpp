#include <iostream>
using namespace std;

// Function prototype
double calculateRetail(double wholesaleCost, double markupPercentage);

int main() {
    double wholesaleCost, markupPercentage;

    // Get the wholesale cost
    cout << "Enter the wholesale cost of the item: $";
    cin >> wholesaleCost;

    // Input validation for wholesale cost
    if (wholesaleCost < 0) {
        cout << "Wholesale cost cannot be negative. Please enter a valid value." << endl;
        return 1; // Exit with an error code
    }

    // Get the markup percentage
    cout << "Enter the markup percentage (as a whole number): ";
    cin >> markupPercentage;

    // Input validation for markup percentage
    if (markupPercentage < 0) {
        cout << "Markup percentage cannot be negative. Please enter a valid value." << endl;
        return 1; // Exit with an error code
    }

    // Calculate and display the retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    cout << "The item's retail price is: $" << retailPrice << endl;

    return 0;
}

// Function to calculate the retail price
double calculateRetail(double wholesaleCost, double markupPercentage) {
    return wholesaleCost * (1 + markupPercentage / 100);
}