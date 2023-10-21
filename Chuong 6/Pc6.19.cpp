#include <iostream>
#include <fstream>
using namespace std;

// Function prototypes
void getPatientData(int &days, double &dailyRate, double &medicationCharges, double &serviceCharges);
double calculateCharges(int days, double dailyRate, double medicationCharges, double serviceCharges);

int main() {
    int days;
    double dailyRate, medicationCharges, serviceCharges;
    
    getPatientData(days, dailyRate, medicationCharges, serviceCharges);
    double totalCharges = calculateCharges(days, dailyRate, medicationCharges, serviceCharges);

    // Write the report to a file
    ofstream outputFile("hospital_report.txt");
    if (!outputFile) {
        cerr << "Error opening the file for writing." << endl;
        return 1;
    }

    outputFile << "Hospital Report\n";
    outputFile << "Number of Days: " << days << endl;
    outputFile << "Daily Rate: $" << dailyRate << endl;
    outputFile << "Medication Charges: $" << medicationCharges << endl;
    outputFile << "Service Charges: $" << serviceCharges << endl;
    outputFile << "Total Charges: $" << totalCharges << endl;

    cout << "Hospital Report has been written to hospital_report.txt." << endl;

    outputFile.close();

    return 0;
}

void getPatientData(int &days, double &dailyRate, double &medicationCharges, double &serviceCharges) {
    cout << "Enter the number of days in the hospital: ";
    cin >> days;
    cout << "Enter the daily rate: $";
    cin >> dailyRate;
    cout << "Enter the medication charges: $";
    cin >> medicationCharges;
    cout << "Enter the service charges: $";
    cin >> serviceCharges;
}

double calculateCharges(int days, double dailyRate, double medicationCharges, double serviceCharges) {
    return (days * dailyRate) + medicationCharges + serviceCharges;
}