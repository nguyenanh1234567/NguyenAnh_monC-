#include <iostream>
using namespace std;

// Function to calculate profit (or loss) from the sale of stock
double calculateStockProfit(int numShares, double purchasePricePerShare, double purchaseCommission,
                            double salePricePerShare, double saleCommission) {
    double profit = ((numShares * salePricePerShare) - saleCommission) - ((numShares * purchasePricePerShare) + purchaseCommission);
    return profit;
}

int main() {
    int numSales;
    double totalProfit = 0.0;

    // Input the number of stock sales
    cout << "Enter the number of stock sales: ";
    cin >> numSales;

    for (int i = 1; i <= numSales; i++) {
        int numShares;
        double purchasePricePerShare, purchaseCommission, salePricePerShare, saleCommission;

        // Input data for each stock sale
        cout << "Stock Sale #" << i << endl;
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

        // Calculate the profit (or loss) for this stock sale
        double profit = calculateStockProfit(numShares, purchasePricePerShare, purchaseCommission, salePricePerShare, saleCommission);

        // Accumulate the total profit
        totalProfit += profit;
    }

    // Display the total profit (or loss) from all stock sales
    cout << "Total profit (or loss) from all stock sales: $" << totalProfit << endl;

    return 0;
}