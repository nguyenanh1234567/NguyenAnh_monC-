#include <iostream>
using namespace std;

int main() {
    const int numEmployees = 7;
    long empId[numEmployees] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[numEmployees];
    double payRate[numEmployees];
    double wages[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        cout << "Enter hours worked for employee " << empId[i] << ": ";
        cin >> hours[i];

        while (hours[i] < 0) {
            cout << "Hours worked cannot be negative. Please enter hours worked again: ";
            cin >> hours[i];
        }

        cout << "Enter pay rate for employee " << empId[i] << ": ";
        cin >> payRate[i];

        while (payRate[i] < 15.00) {
            cout << "Pay rate cannot be less than 15.00. Please enter pay rate again: ";
            cin >> payRate[i];
        }

        wages[i] = hours[i] * payRate[i];
    }

    cout << "Employee ID\tGross Wages" << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << empId[i] << "\t\t" << wages[i] << endl;
    }

    return 0;
}