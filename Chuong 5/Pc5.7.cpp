#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numDays;
    
    // Get the number of days worked
    cout << "Enter the number of days worked: ";
    cin >> numDays;

    // Input validation: Do not accept a number less than 1 for the number of days
    if (numDays < 1) {
        cout << "Please enter a number of days greater than or equal to 1." << endl;
        return 1;
    }

    cout << "Day\tSalary (in dollars)" << endl;
    cout << "------------------------" << endl;

    double totalSalary = 0.0;
    double salary = 0.01; // Initial salary is one penny

    for (int day = 1; day <= numDays; day++) {
        totalSalary += salary;
        cout << day << "\t$" << fixed << setprecision(2) << salary / 100.0 << endl; // Convert pennies to dollars
        salary *= 2; // Double the salary for the next day
    }

    cout << "Total earnings over " << numDays << " days: $" << fixed << setprecision(2) << totalSalary / 100.0 << endl; // Convert total earnings to dollars

    return 0;
}