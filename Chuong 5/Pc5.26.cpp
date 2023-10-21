#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ofstream outputFile("SavingsAccountReport.txt"); // Create the output file
    if (!outputFile) {
        cout << "Error opening the output file.\n";
        return 1;
    }

    double annualInterestRate, startingBalance, monthlyDeposit;
    int numMonths;

    // Get user input
    cout << "Enter the annual interest rate: ";
    cin >> annualInterestRate;
    cout << "Enter the starting balance: ";
    cin >> startingBalance;
    cout << "Enter the monthly deposit: ";
    cin >> monthlyDeposit;
    cout << "Enter the number of months: ";
    cin >> numMonths;

    // Initialize variables
    double balance = startingBalance;
    double totalDeposits = 0.0;
    double totalInterest = 0.0;

    // Display the report header in the console
    cout << fixed << setprecision(2);
    cout << "Month    Balance     Deposit     Interest\n";
    cout << "----------------------------------------\n";

    // Write the report header to the output file
    outputFile << fixed << setprecision(2);
    outputFile << "Month    Balance     Deposit     Interest\n";
    outputFile << "----------------------------------------\n";

    for (int month = 1; month <= numMonths; month++) {
        double interest = (balance + totalDeposits) * (annualInterestRate / 12);
        balance += interest + monthlyDeposit;
        totalDeposits += monthlyDeposit;
        totalInterest += interest;

        // Display and write each month's data to the report
        cout << setw(2) << month;
        cout << setw(11) << balance;
        cout << setw(12) << monthlyDeposit;
        cout << setw(13) << interest << endl;

        outputFile << setw(2) << month;
        outputFile << setw(11) << balance;
        outputFile << setw(12) << monthlyDeposit;
        outputFile << setw(13) << interest << endl;
    }

    // Display and write the final report
    cout << "\nTotal deposits: $" << totalDeposits << endl;
    cout << "Total interest earned: $" << totalInterest << endl;
    cout << "Final balance: $" << balance << endl;

    outputFile << "\nTotal deposits: $" << totalDeposits << endl;
    outputFile << "Total interest earned: $" << totalInterest << endl;
    outputFile << "Final balance: $" << balance << endl;

    // Close the output file
    outputFile.close();

    return 0;
}