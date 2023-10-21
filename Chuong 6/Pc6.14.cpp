#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getOrderData(int& spoolsOrdered, int& spoolsInStock, bool& specialCharges, double& chargesPerSpool);
void displayOrderStatus(int spoolsOrdered, int spoolsInStock, bool specialCharges, double chargesPerSpool = 10.00);

int main() {
    int spoolsOrdered, spoolsInStock;
    bool specialCharges;
    double chargesPerSpool;

    getOrderData(spoolsOrdered, spoolsInStock, specialCharges, chargesPerSpool);
    displayOrderStatus(spoolsOrdered, spoolsInStock, specialCharges, chargesPerSpool);

    return 0;
}

// Function to get order data
void getOrderData(int& spoolsOrdered, int& spoolsInStock, bool& specialCharges, double& chargesPerSpool) {
    do {
        cout << "Enter the number of spools ordered: ";
        cin >> spoolsOrdered;
    } while (spoolsOrdered < 1);

    do {
        cout << "Enter the number of spools in stock: ";
        cin >> spoolsInStock;
    } while (spoolsInStock < 0);

    cout << "Are there special shipping and handling charges? (1 for Yes, 0 for No): ";
    cin >> specialCharges;

    if (specialCharges) {
        do {
            cout << "Enter the special charges per spool: ";
            cin >> chargesPerSpool;
        } while (chargesPerSpool < 0);
    }
}

// Function to display order status
void displayOrderStatus(int spoolsOrdered, int spoolsInStock, bool specialCharges, double chargesPerSpool) {
    cout << "\nOrder Status:" << endl;
    cout << "Number of spools ready to ship: " << min(spoolsOrdered, spoolsInStock) << endl;
    cout << "Number of spools on backorder: " << max(0, spoolsOrdered - spoolsInStock) << endl;
    double subtotal = min(spoolsOrdered, spoolsInStock) * 100.00;
    cout << "Subtotal of the portion ready to ship: $" << fixed << setprecision(2) << subtotal << endl;
    double shippingCharges = specialCharges ? chargesPerSpool * min(spoolsOrdered, spoolsInStock) : 10.00 * min(spoolsOrdered, spoolsInStock);
    cout << "Total shipping and handling charges on the portion ready to ship: $" << fixed << setprecision(2) << shippingCharges << endl;
    double total = subtotal + shippingCharges;
    cout << "Total of the order ready to ship: $" << fixed << setprecision(2) << total << endl;
}