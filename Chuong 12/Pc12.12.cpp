#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Define the structure for division data
struct DivisionData {
    string divisionName;
    int quarter;
    double quarterlySales;
};

// Function to read sales data from a file
void readSalesData(const string& fileName, vector<DivisionData>& salesData) {
    ifstream inFile(fileName);

    if (!inFile) {
        cerr << "Error opening file." << endl;
        return;
    }

    DivisionData data;
    while (inFile >> data.divisionName >> data.quarter >> data.quarterlySales) {
        salesData.push_back(data);
    }

    inFile.close();
}

int main() {
    const int NUM_DIVISIONS = 4;
    const int NUM_QUARTERS = 4;

    vector<DivisionData> salesData;
    readSalesData("sales_data.txt", salesData);

    if (salesData.empty()) {
        cout << "No sales data found in the file." << endl;
        return 1;
    }

    // Initialize variables to store statistics
    double quarterlyTotal[NUM_QUARTERS] = {0};
    double divisionTotal[NUM_DIVISIONS] = {0};
    double corporateTotal = 0;

    // Calculate statistics
    for (const DivisionData& data : salesData) {
        corporateTotal += data.quarterlySales;
        quarterlyTotal[data.quarter - 1] += data.quarterlySales;
        divisionTotal[data.quarter - 1] += data.quarterlySales;
    }

    // Find the highest and lowest quarters for the corporation
    double highestQuarterlySales = quarterlyTotal[0];
    double lowestQuarterlySales = quarterlyTotal[0];
    int highestQuarter = 1;
    int lowestQuarter = 1;

    for (int i = 1; i < NUM_QUARTERS; i++) {
        if (quarterlyTotal[i] > highestQuarterlySales) {
            highestQuarterlySales = quarterlyTotal[i];
            highestQuarter = i + 1;
        }
        if (quarterlyTotal[i] < lowestQuarterlySales) {
            lowestQuarterlySales = quarterlyTotal[i];
            lowestQuarter = i + 1;
        }
    }

    // Calculate average quarterly sales for each division
    double averageQuarterlySales[NUM_DIVISIONS] = {0};
    for (int i = 0; i < NUM_DIVISIONS; i++) {
        averageQuarterlySales[i] = divisionTotal[i] / NUM_QUARTERS;
    }

    // Display statistics
    cout << "Total Corporate Sales by Quarter:" << endl;
    for (int i = 0; i < NUM_QUARTERS; i++) {
        cout << "Quarter " << i + 1 << ": $" << quarterlyTotal[i] << endl;
    }

    cout << "Total Yearly Sales for Each Division:" << endl;
    for (int i = 0; i < NUM_DIVISIONS; i++) {
        cout << salesData[i].divisionName << ": $" << divisionTotal[i] << endl;
    }

    cout << "Total Yearly Corporate Sales: $" << corporateTotal << endl;

    cout << "Average Quarterly Sales for Each Division:" << endl;
    for (int i = 0; i < NUM_DIVISIONS; i++) {
        cout << salesData[i].divisionName << ": $" << averageQuarterlySales[i] << endl;
    }

    cout << "Highest Quarter for the Corporation: Quarter " << highestQuarter << " with $" << highestQuarterlySales << " in sales." << endl;
    cout << "Lowest Quarter for the Corporation: Quarter " << lowestQuarter << " with $" << lowestQuarterlySales << " in sales." << endl;

    return 0;
}