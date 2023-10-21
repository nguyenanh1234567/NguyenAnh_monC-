#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<int> hours;     // Vector to store hours worked
    vector<double> payRate; // Vector to store hourly pay rates
    int numEmployees;      // The number of employees
    int index;             // Loop counter

    // Get the number of employees.
    cout << "How many employees do you have? ";
    cin >> numEmployees;

    // Input the payroll data.
    cout << "Enter the hours worked by " << numEmployees << " employees and their hourly rates.\n";
    for (index = 0; index < numEmployees; index++)
    {
        int tempHours;    // To hold the number of hours entered
        double tempRate;  // To hold the pay rate entered

        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> tempHours;
        hours.push_back(tempHours); // Add an element to the 'hours' vector

        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        cin >> tempRate;
        payRate.push_back(tempRate); // Add an element to the 'payRate' vector
    }

    // Display each employee's gross pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1) << ": $" << grossPay << endl;
    }

    return 0;
}