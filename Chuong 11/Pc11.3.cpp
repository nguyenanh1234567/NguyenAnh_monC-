#include <iostream>
#include <string>
using namespace std;

struct DivisionData {
    string divisionName;
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;
    double totalAnnualSales;
    double averageQuarterlySales;
};

int main() {
    DivisionData east = {"East"};
    DivisionData west = {"West"};
    DivisionData north = {"North"};
    DivisionData south = {"South"};

    // Input sales figures for each division (implement input validation as needed)
    cout << "Enter first-quarter sales for East Division: ";
    cin >> east.firstQuarterSales;

    // Continue this process for all sales figures for all divisions...

    // Calculate total and average sales for each division
    east.totalAnnualSales = east.firstQuarterSales + east.secondQuarterSales + east.thirdQuarterSales + east.fourthQuarterSales;
    east.averageQuarterlySales = east.totalAnnualSales / 4;

    // Repeat the same calculations for other divisions

    // Display the results
    cout << "East Division Total Sales: $" << east.totalAnnualSales << endl;
    cout << "East Division Average Quarterly Sales: $" << east.averageQuarterlySales << endl;

    // Repeat the same display for other divisions

    return 0;
}