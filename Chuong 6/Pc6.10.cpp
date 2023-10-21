#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
double futureValue(double presentValue, double monthlyInterestRate, int numMonths);

int main() {
    double presentValue, monthlyInterestRate;
    int numMonths;

    cout << "This program calculates the future value of a savings account.\n";
    cout << "Enter the present value (P): $";
    cin >> presentValue;
    cout << "Enter the monthly interest rate (as a decimal): ";
    cin >> monthlyInterestRate;
    cout << "Enter the number of months (t): ";
    cin >> numMonths;

    double futureVal = futureValue(presentValue, monthlyInterestRate, numMonths);

    cout << "The future value of the account after " << numMonths << " months is: $" << futureVal << endl;

    return 0;
}

// Function to calculate the future value
double futureValue(double presentValue, double monthlyInterestRate, int numMonths) {
    double futureVal = presentValue * pow(1 + monthlyInterestRate, numMonths);
    return futureVal;
}