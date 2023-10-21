#include <iostream>
using namespace std;

// Function prototypes
double calculateCharges(int days, double rate, double medicationCharges, double serviceCharges);
double calculateCharges(double medicationCharges, double serviceCharges);

int main() {
    char patientType;
    int days;
    double rate, medicationCharges, serviceCharges, totalCharges;

    cout << "Was the patient admitted as an in-patient (I) or an out-patient (O)? ";
    cin >> patientType;

    if (patientType == 'I' || patientType == 'i') {
        cout << "Enter the number of days spent in the hospital: ";
        cin >> days;

        cout << "Enter the daily rate: $";
        cin >> rate;

        cout << "Enter hospital medication charges: $";
        cin >> medicationCharges;

        cout << "Enter charges for hospital services: $";
        cin >> serviceCharges;

        totalCharges = calculateCharges(days, rate, medicationCharges, serviceCharges);
    } else if (patientType == 'O' || patientType == 'o') {
        cout << "Enter charges for hospital services: $";
        cin >> serviceCharges;

        cout << "Enter hospital medication charges: $";
        cin >> medicationCharges;

        totalCharges = calculateCharges(medicationCharges, serviceCharges);
    } else {
        cout << "Invalid input. Please enter 'I' for in-patient or 'O' for out-patient." << endl;
        return 1;
    }

    cout << "Total charges for the patient: $" << totalCharges << endl;

    return 0;
}

// Function to calculate in-patient charges
double calculateCharges(int days, double rate, double medicationCharges, double serviceCharges) {
    if (days < 0 || rate < 0 || medicationCharges < 0 || serviceCharges < 0) {
        cout << "Negative values are not allowed." << endl;
        return 0.0;
    }

    return (days * rate) + medicationCharges + serviceCharges;
}

// Function to calculate out-patient charges
double calculateCharges(double medicationCharges, double serviceCharges) {
    if (medicationCharges < 0 || serviceCharges < 0) {
        cout << "Negative values are not allowed." << endl;
        return 0.0;
    }

    return medicationCharges + serviceCharges;
}