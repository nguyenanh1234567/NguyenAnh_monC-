#include <iostream>
#include <iomanip>
using namespace std;

struct HourlyPaid {
    double hoursWorked;
    double hourlyRate;
};

struct Salaried {
    double salary;
    double bonus;
};

union Payroll {
    HourlyPaid hourly;
    Salaried salaried;
};

int main() {
    Payroll payroll;
    
    char choice;
    cout << "Are you calculating pay for an hourly paid worker (h) or a salaried worker (s)? ";
    cin >> choice;
    
    if (choice == 'h' || choice == 'H') {
        cout << "Enter hours worked: ";
        cin >> payroll.hourly.hoursWorked;
        cout << "Enter hourly rate: ";
        cin >> payroll.hourly.hourlyRate;
        
        if (payroll.hourly.hoursWorked >= 0 && payroll.hourly.hoursWorked <= 80 &&
            payroll.hourly.hourlyRate >= 0) {
            double pay = payroll.hourly.hoursWorked * payroll.hourly.hourlyRate;
            cout << "Hourly paid worker's pay: $" << setprecision(2) << pay << endl;
        } else {
            cout << "Invalid input. Hours worked must be between 0 and 80, and hourly rate must be non-negative.\n";
        }
    } else if (choice == 's' || choice == 'S') {
        cout << "Enter salary: ";
        cin >> payroll.salaried.salary;
        cout << "Enter bonus: ";
        cin >> payroll.salaried.bonus;
        
        if (payroll.salaried.salary >= 0 && payroll.salaried.bonus >= 0) {
            double pay = payroll.salaried.salary + payroll.salaried.bonus;
            cout << "Salaried worker's pay: $" << setprecision(2) << pay << endl;
        } else {
            cout << "Invalid input. Salary and bonus must be non-negative.\n";
        }
    } else {
        cout << "Invalid choice. Please select 'h' for hourly paid worker or 's' for salaried worker.\n";
    }
    
    return 0;
}