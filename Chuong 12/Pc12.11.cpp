#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Define the structure for division data
struct DivisionData {
    string divisionName;
    int quarter;
    double quarterlySales;
};

int main() {
    const int NUM_DIVISIONS = 4;
    const int NUM_QUARTERS = 4;

    // Create an array of structures to store division data
    DivisionData divisions[NUM_DIVISIONS * NUM_QUARTERS];

    // Open a file for writing
    ofstream outFile("sales_data.txt");

    if (!outFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // Input quarterly sales data
    for (int i = 0; i < NUM_DIVISIONS; i++) {
        for (int j = 0; j < NUM_QUARTERS; j++) {
            divisions[i * NUM_QUARTERS + j].quarter = j + 1;
            cout << "Enter sales data for " << divisions[i * NUM_QUARTERS + j].divisionName << " (Quarter " << j + 1 << "): $";
            cin >> divisions[i * NUM_QUARTERS + j].quarterlySales;
            if (divisions[i * NUM_QUARTERS + j].quarterlySales < 0) {
                cout << "Sales figures cannot be negative. Please re-enter." << endl;
                j--;
            }
        }
    }

    // Write data to the file
    for (int i = 0; i < NUM_DIVISIONS * NUM_QUARTERS; i++) {
        outFile << divisions[i].divisionName << " " << divisions[i].quarter << " " << divisions[i].quarterlySales << endl;
    }

    outFile.close();
    cout << "Data written to sales_data.txt" << endl;

    return 0;
}