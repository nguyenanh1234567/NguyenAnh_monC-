#include <iostream>
using namespace std;

int main() {
    double costPrice = 14.95;  // Cost price of the circuit board
    double profitPercentage = 0.35;  // Profit percentage (35%)

    // Calculate the selling price
    double sellingPrice = costPrice + (costPrice * profitPercentage);

    cout << "The selling price of the circuit board is: $" << sellingPrice << endl;

    return 0;
}