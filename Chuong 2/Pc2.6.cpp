#include <iostream>
using namespace std;

int main() {
    double payAmount = 2200.0;  // Amount earned each pay period
    int payPeriods = 26;        // Number of pay periods in a year

    // Calculate the total annual pay
    double annualPay = payAmount * payPeriods;

    cout << "The employee's total annual pay is: $" << annualPay << endl;

    return 0;
}