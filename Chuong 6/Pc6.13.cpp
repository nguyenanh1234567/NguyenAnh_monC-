#include <iostream>
using namespace std;

// Function prototypes
int getNumEmployees();
int getTotalDaysAbsent(int numEmployees);
double calculateAverageDaysAbsent(int numEmployees, int totalDaysAbsent);

int main() {
    int numEmployees = getNumEmployees();
    int totalDaysAbsent = getTotalDaysAbsent(numEmployees);
    double averageDaysAbsent = calculateAverageDaysAbsent(numEmployees, totalDaysAbsent);

    cout << "The average number of days absent for the company's employees is: " << averageDaysAbsent << " days." << endl;

    return 0;
}

// Function to get the number of employees
int getNumEmployees() {
    int numEmployees;
    do {
        cout << "Enter the number of employees in the company: ";
        cin >> numEmployees;
    } while (numEmployees < 1);
    return numEmployees;
}

// Function to get the total number of days absent
int getTotalDaysAbsent(int numEmployees) {
    int totalDaysAbsent = 0;
    for (int i = 1; i <= numEmployees; i++) {
        int daysAbsent;
        do {
            cout << "Enter the number of days employee " << i << " missed during the past year: ";
            cin >> daysAbsent;
        } while (daysAbsent < 0);
        totalDaysAbsent += daysAbsent;
    }
    return totalDaysAbsent;
}

// Function to calculate the average number of days absent
double calculateAverageDaysAbsent(int numEmployees, int totalDaysAbsent) {
    return static_cast<double>(totalDaysAbsent) / numEmployees;
}