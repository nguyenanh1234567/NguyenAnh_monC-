 #include <iostream>
using namespace std;

int main() {
    int shares = 750;            // Number of shares
    double sharePrice = 35.00;  // Price per share
    double commissionRate = 0.02;  // 2 percent commission rate

    // Calculate the amount paid for the stock alone (without commission)
    double stockAmount = shares * sharePrice;

    // Calculate the commission
    double commission = stockAmount * commissionRate;

    // Calculate the total amount paid (for the stock plus the commission)
    double totalAmount = stockAmount + commission;

    // Display the results
    cout << "Amount paid for the stock alone: $" << stockAmount << endl;
    cout << "Amount of commission: $" << commission << endl;
    cout << "Total amount paid (stock plus commission): $" << totalAmount << endl;

    return 0;
}