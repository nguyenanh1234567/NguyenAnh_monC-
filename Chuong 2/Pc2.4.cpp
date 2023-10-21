#include <iostream>
using namespace std;

int main() {
    double mealCharge = 88.67;  // Meal charge in dollars
    double taxRate = 0.0675;   // Tax rate (6.75%)
    double tipPercentage = 0.20;  // Tip percentage (20%)

    // Calculate the tax amount
    double taxAmount = mealCharge * taxRate;

    // Calculate the total cost after adding tax
    double totalWithTax = mealCharge + taxAmount;

    // Calculate the tip amount
    double tipAmount = totalWithTax * tipPercentage;

    // Calculate the total bill
    double totalBill = totalWithTax + tipAmount;

    cout << "Meal cost: $" << mealCharge << endl;
    cout << "Tax amount: $" << taxAmount << endl;
    cout << "Tip amount: $" << tipAmount << endl;
    cout << "Total bill: $" << totalBill << endl;

    return 0;
}