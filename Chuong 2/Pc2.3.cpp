#include <iostream>
using namespace std;

int main() {
    double purchaseAmount = 95.0;  // Purchase amount in dollars
    double stateSalesTaxRate = 0.04;  // State sales tax rate (4%)
    double countySalesTaxRate = 0.02;  // County sales tax rate (2%)

    // Calculate the state and county sales tax amounts
    double stateSalesTax = purchaseAmount * stateSalesTaxRate;
    double countySalesTax = purchaseAmount * countySalesTaxRate;

    // Calculate the total sales tax
    double totalSalesTax = stateSalesTax + countySalesTax;

    cout << "The state sales tax on a $" << purchaseAmount << " purchase is $" << stateSalesTax << endl;
    cout << "The county sales tax on a $" << purchaseAmount << " purchase is $" << countySalesTax << endl;
    cout << "The total sales tax on a $" << purchaseAmount << " purchase is $" << totalSalesTax << endl;

    return 0;
}