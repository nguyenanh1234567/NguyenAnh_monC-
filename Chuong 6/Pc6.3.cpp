#include <iostream>
#include <string>
using namespace std;

// Function prototypes
double getSales(const string& divisionName);
void findHighest(double northeast, double southeast, double northwest, double southwest);

int main() {
    double northeastSales, southeastSales, northwestSales, southwestSales;

    // Get sales figures for each division
    northeastSales = getSales("Northeast");
    southeastSales = getSales("Southeast");
    northwestSales = getSales("Northwest");
    southwestSales = getSales("Southwest");

    // Find and display the highest grossing division
    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}

// Function to get quarterly sales for a division
double getSales(const string& divisionName) {
    double sales;
    do {
        cout << "Enter the quarterly sales for " << divisionName << ": $";
        cin >> sales;
    } while (sales < 0.0);
    return sales;
}

// Function to find the highest grossing division
void findHighest(double northeast, double southeast, double northwest, double southwest) {
    double highestSales = northeast;
    string highestDivision = "Northeast";

    if (southeast > highestSales) {
        highestSales = southeast;
        highestDivision = "Southeast";
    }
    if (northwest > highestSales) {
        highestSales = northwest;
        highestDivision = "Northwest";
    }
    if (southwest > highestSales) {
        highestSales = southwest;
        highestDivision = "Southwest";
    }

    cout << "The highest grossing division is " << highestDivision << " with sales of $" << highestSales << endl;
}