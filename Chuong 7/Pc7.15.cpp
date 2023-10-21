#include <iostream>
#include <vector>
using namespace std;

// Function Prototype
bool testPIN(const vector<int>&, const vector<int>&);

int main() {
    const int NUM_DIGITS = 7; // Number of digits in a PIN
    vector<int> pin1 = {2, 4, 1, 8, 7, 9, 0}; // Base set of values.
    vector<int> pin2 = {2, 4, 6, 8, 7, 9, 0}; // Only 1 element is different from pin1.
    vector<int> pin3 = {1, 2, 3, 4, 5, 6, 7}; // All elements are different from pin1.

    if (testPIN(pin1, pin2)) {
        cout << "ERROR: pin1 and pin2 report to be the same." << endl;
    } else {
        cout << "SUCCESS: pin1 and pin2 are different." << endl;
    }

    if (testPIN(pin1, pin3)) {
        cout << "ERROR: pin1 and pin3 report to be the same." << endl;
    } else {
        cout << "SUCCESS: pin1 and pin3 are different." << endl;
    }

    if (testPIN(pin1, pin1)) {
        cout << "SUCCESS: pin1 and pin1 report to be the same." << endl;
    } else {
        cout << "ERROR: pin1 and pin1 report to be different." << endl;
    }

    return 0;
}

// Function Definition for testPIN
bool testPIN(const vector<int>& custPIN, const vector<int>& databasePIN) {
    for (int index = 0; index < custPIN.size(); index++) {
        if (custPIN[index] != databasePIN[index]) {
            return false; // We've found two different values.
        }
    }
    return true; // If we make it this far, the values are the same.
}