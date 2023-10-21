#include <iostream>
using namespace std;

int main() {
    // Prices of the five items
    double priceItem1 = 15.95;
    double priceItem2 = 24.95;
    double priceItem3 = 6.95;
    double priceItem4 = 12.95;
    double priceItem5 = 3.95;

    // Sales tax rate (7%)
    double salesTaxRate = 0.07;

    // Calculate the subtotal
    double subtotal = priceItem1 + priceItem2 + priceItem3 + priceItem4 + priceItem5;

    // Calculate the sales tax
    double salesTax = subtotal * salesTaxRate;

    // Calculate the total
    double total = subtotal + salesTax;

    // Display the prices, subtotal, sales tax, and total
    cout << "Price of item 1: $" << priceItem1 << endl;
    cout << "Price of item 2: $" << priceItem2 << endl;
    cout << "Price of item 3: $" << priceItem3 << endl;
    cout << "Price of item 4: $" << priceItem4 << endl;
    cout << "Price of item 5: $" << priceItem5 << endl;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax (7%): $" << salesTax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}