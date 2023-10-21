#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double loanAmount, annualInterestRate, monthlyInterestRate, monthlyPayment, totalAmountPaid, interestPaid;
    int numberOfPayments;

    // Input
    cout << "Enter the loan amount: $";
    cin >> loanAmount;
    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> annualInterestRate;
    cout << "Enter the number of payments: ";
    cin >> numberOfPayments;

    // Convert annual interest rate to monthly interest rate
    monthlyInterestRate = (annualInterestRate / 100.0) / 12.0;

    // Calculate monthly payment
    monthlyPayment = (monthlyInterestRate * loanAmount) /
                    (1 - pow(1 + monthlyInterestRate, -numberOfPayments));
    
    // Calculate total amount paid and interest paid
    totalAmountPaid = monthlyPayment * numberOfPayments;
    interestPaid = totalAmountPaid - loanAmount;

    // Display the results
    cout << fixed << setprecision(2);
    cout << "Loan Amount: $" << loanAmount << endl;
    cout << "Monthly Interest Rate: " << (monthlyInterestRate * 100) << "%" << endl;
    cout << "Number of Payments: " << numberOfPayments << endl;
    cout << "Monthly Payment: $" << monthlyPayment << endl;
    cout << "Amount Paid Back: $" << totalAmountPaid << endl;
    cout << "Interest Paid: $" << interestPaid << endl;

    return 0;
}