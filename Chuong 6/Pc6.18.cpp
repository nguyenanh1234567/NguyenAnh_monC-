#include <iostream>
using namespace std;

// Function prototypes
double calculatePaintGallons(int squareFeet);
double calculateLaborHours(int squareFeet);
double calculatePaintCost(int gallons, double pricePerGallon);
double calculateLaborCost(double laborHours);
double calculateTotalCost(double paintCost, double laborCost);

int main() {
    int numRooms;
    double pricePerGallon;
    double totalPaintGallons = 0.0;
    double totalLaborHours = 0.0;
    double totalPaintCost = 0.0;
    double totalLaborCost = 0.0;

    cout << "Enter the number of rooms to be painted: ";
    cin >> numRooms;

    if (numRooms < 1) {
        cout << "Number of rooms must be 1 or greater." << endl;
        return 1;
    }

    cout << "Enter the price of paint per gallon ($10.00 or more): ";
    cin >> pricePerGallon;

    if (pricePerGallon < 10.00) {
        cout << "Price of paint must be $10.00 or more." << endl;
        return 1;
    }

    for (int i = 1; i <= numRooms; i++) {
        int squareFeet;
        cout << "Enter the square feet of wall space in room " << i << ": ";
        cin >> squareFeet;

        if (squareFeet < 0) {
            cout << "Square footage cannot be negative." << endl;
            return 1;
        }

        totalPaintGallons += calculatePaintGallons(squareFeet);
        totalLaborHours += calculateLaborHours(squareFeet);
    }

    totalPaintCost = calculatePaintCost(totalPaintGallons, pricePerGallon);
    totalLaborCost = calculateLaborCost(totalLaborHours);

    cout << "The number of gallons of paint required: " << totalPaintGallons << endl;
    cout << "The hours of labor required: " << totalLaborHours << " hours" << endl;
    cout << "The cost of the paint: $" << totalPaintCost << endl;
    cout << "The labor charges: $" << totalLaborCost << endl;
    cout << "The total cost of the paint job: $" << calculateTotalCost(totalPaintCost, totalLaborCost) << endl;

    return 0;
}

// Function to calculate gallons of paint required
double calculatePaintGallons(int squareFeet) {
    return static_cast<double>(squareFeet) / 110.0;
}

// Function to calculate labor hours required
double calculateLaborHours(int squareFeet) {
    return static_cast<double>(squareFeet) / 110.0 * 8.0;
}

// Function to calculate paint cost
double calculatePaintCost(int gallons, double pricePerGallon) {
    return gallons * pricePerGallon;
}

// Function to calculate labor cost
double calculateLaborCost(double laborHours) {
    return laborHours * 25.0; // Labor charges are $25.00 per hour
}

// Function to calculate total cost of the paint job
double calculateTotalCost(double paintCost, double laborCost) {
    return paintCost + laborCost;
}