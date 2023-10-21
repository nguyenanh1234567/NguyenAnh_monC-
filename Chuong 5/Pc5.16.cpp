#include <iostream>
using namespace std;

int main() {
    double annualInterestRate, startingBalance;
    int numMonths;

    cout << "Savings Account Balance Calculator\n";
    cout << "Enter the annual interest rate (as a decimal): ";
    cin >> annualInterestRate;
    cout << "Enter the starting balance: $";
    cin >> startingBalance;
    cout << "Enter the number of months: ";
    cin >> numMonths;

    double balance = startingBalance;
    double totalDeposits = 0, totalWithdrawals = 0, totalInterest = 0;

    for (int month = 1; month <= numMonths; month++) {
        double deposits, withdrawals;
        
        cout << "Month " << month << endl;
        cout << "Enter the amount deposited: $";
        cin >> deposits;
        
        if (deposits < 0) {
            cout << "Invalid deposit amount. Please enter a positive value.\n";
            month--; // Repeat this iteration
            continue;
        }

        totalDeposits += deposits;
        balance += deposits;
        
        cout << "Enter the amount withdrawn: $";
        cin >> withdrawals;
        
        if (withdrawals < 0) {
            cout << "Invalid withdrawal amount. Please enter a positive value.\n";
            month--; // Repeat this iteration
            continue;
        }

        if (balance - withdrawals < 0) {
            cout << "Account has been closed due to a negative balance.\n";
            break;
        }
        
        totalWithdrawals += withdrawals;
        balance -= withdrawals;

        double monthlyInterest = (annualInterestRate / 12) * balance;
        totalInterest += monthlyInterest;
        balance += monthlyInterest;
    }

    cout << "Ending balance: $" << balance << endl;
    cout << "Total deposits: $" << totalDeposits << endl;
    cout << "Total withdrawals: $" << totalWithdrawals << endl;
    cout << "Total interest earned: $" << totalInterest << endl;

    return 0;
}