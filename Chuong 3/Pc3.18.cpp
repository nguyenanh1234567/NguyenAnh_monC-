#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double principal, rate, interest, amount;
    int timesCompounded;

    // Input
    cout << "Enter the principal amount: $";
    cin >> principal;
    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> rate;
    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert rate to decimal form
    rate = rate / 100;

    // Calculate the amount
    amount = principal * pow(1 + rate / timesCompounded, timesCompounded);
    interest = amount - principal;

    // Display the results
    cout << fixed << setprecision(2);
    cout << "Interest Rate: " << rate * 100 << "%" << endl;
    cout << "Times Compounded: " << timesCompounded << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << interest << endl;
    cout << "Amount in Savings: $" << amount << endl;

    return 0;
}