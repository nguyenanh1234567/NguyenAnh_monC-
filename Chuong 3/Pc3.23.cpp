#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Constants
    const int sharesPurchased = 1000;
    const double purchasePricePerShare = 45.50;
    const double purchaseCommissionRate = 0.02; // 2%
    const double sharesSold = 1000;
    const double salePricePerShare = 56.90;
    const double saleCommissionRate = 0.02; // 2%

    // Calculate the total amount paid for the stock
    double amountPaidForStock = sharesPurchased * purchasePricePerShare;

    // Calculate the commission paid when buying the stock
    double purchaseCommission = amountPaidForStock * purchaseCommissionRate;

    // Calculate the total amount received from selling the stock
    double amountReceivedFromSale = sharesSold * salePricePerShare;

    // Calculate the commission paid when selling the stock
    double saleCommission = amountReceivedFromSale * saleCommissionRate;

    // Calculate the profit or loss
    double profitOrLoss = amountReceivedFromSale - saleCommission - amountPaidForStock - purchaseCommission;

    // Display the information
    cout << fixed << setprecision(2);
    cout << "Amount paid for the stock: $" << amountPaidForStock << endl;
    cout << "Commission paid when buying the stock: $" << purchaseCommission << endl;
    cout << "Amount received from selling the stock: $" << amountReceivedFromSale << endl;
    cout << "Commission paid when selling the stock: $" << saleCommission << endl;
    cout << "Profit or Loss: $" << profitOrLoss << endl;

    return 0;
}