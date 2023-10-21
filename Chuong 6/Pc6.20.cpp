#include <iostream>
using namespace std;

// Function to calculate profit (or loss) from the sale of stock
double calculateStockProfit(int numShares, double purchasePricePerShare, double purchaseCommission,
                            double salePricePerShare, double saleCommission) {
    double profit = ((numShares * salePricePerShare) - saleCommission) - ((numShares * purchasePricePerShare) + purchaseCommission);
    return profit;
}

int main() {
    int numShares;
    double purchasePricePerShare, purchaseCommission, salePricePerShare, saleCommission;

    // Input data from the user
    cout << "Enter the number of shares: ";
    cin >> numShares;
    cout << "Enter the purchase price per share: $";
    cin >> purchasePricePerShare;
    cout << "Enter the purchase commission paid: $";
    cin >> purchaseCommission;
    cout << "Enter the sale price per share: $";
    cin >> salePricePerShare;
    cout << "Enter the sale commission paid: $";
    cin >> saleCommission;

    // Calculate the profit (or loss) from the sale of stock
    double profit = calculateStockProfit(numShares, purchasePricePerShare, purchaseCommission, salePricePerShare, saleCommission);

    // Display the result
    if (profit > 0) {
        cout << "You made a profit of $" << profit << endl;
    } else if (profit < 0) {
        cout << "You incurred a loss of $" << -profit << endl;
    } else {
        cout << "You broke even, no profit or loss." << endl;
    }

    return 0;
}