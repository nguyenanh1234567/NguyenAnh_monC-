#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double STATE_SALES_TAX_RATE = 0.04;  // State sales tax rate (4%)
    const double COUNTY_SALES_TAX_RATE = 0.02;  // County sales tax rate (2%)

    string month;
    int year;
    double totalCollected;

    // Input month, year, and total collected
    cout << "Enter the month: ";
    getline(cin, month);
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the total collected: $";
    cin >> totalCollected;

    // Calculate product sales, county sales tax, state sales tax, and total sales tax
    double productSales = totalCollected / 1.06;
    double countySalesTax = productSales * COUNTY_SALES_TAX_RATE;
    double stateSalesTax = productSales * STATE_SALES_TAX_RATE;
    double totalSalesTax = countySalesTax + stateSalesTax;

    // Display the sales tax report
    cout << fixed << setprecision(2);  // Display currency with two decimal places
    cout << "Month: " << month << endl;
    cout << "--------------------" << endl;
    cout << "Total Collected: $" << totalCollected << endl;
    cout << "Sales: $" << productSales << endl;
    cout << "County Sales Tax: $" << countySalesTax << endl;
    cout << "State Sales Tax: $" << stateSalesTax << endl;
    cout << "Total Sales Tax: $" << totalSalesTax << endl;

    return 0;
}