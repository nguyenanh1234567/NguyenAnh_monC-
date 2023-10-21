#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
double presentValue(double futureValue, double annualInterestRate, int numYears);

int main() {
    double futureValue, annualInterestRate;
    int numYears;

    cout << "This program calculates the present value of a future sum of money.\n";
    cout << "Enter the future value (F): $";
    cin >> futureValue;
    cout << "Enter the annual interest rate (as a decimal): ";
    cin >> annualInterestRate;
    cout << "Enter the number of years (n): ";
    cin >> numYears;

    double presentVal = presentValue(futureValue, annualInterestRate, numYears);

    cout << "To have $" << futureValue << " in " << numYears << " years,\n";
    cout << "you need to deposit $" << presentVal << " today." << endl;

    return 0;
}

// Function to calculate the present value
double presentValue(double futureValue, double annualInterestRate, int numYears) {
    double presentVal = futureValue / pow(1 + annualInterestRate, numYears);
    return presentVal;
}