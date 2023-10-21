#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct InventoryItem {
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

int main() {
    fstream inventoryFile("inventory.txt", ios::in);

    if (!inventoryFile) {
        cerr << "Error opening inventory file." << endl;
        return 1;
    }

    InventoryItem item;
    double totalWholesaleValue = 0.0;
    double totalRetailValue = 0.0;
    int totalQuantity = 0;

    while (inventoryFile >> item.description >> item.quantity >> item.wholesaleCost >> item.retailCost >> item.dateAdded) {
        totalWholesaleValue += item.wholesaleCost * item.quantity;
        totalRetailValue += item.retailCost * item.quantity;
        totalQuantity += item.quantity;
    }

    inventoryFile.close();

    cout << "Total Wholesale Value of Inventory: $" << totalWholesaleValue << endl;
    cout << "Total Retail Value of Inventory: $" << totalRetailValue << endl;
    cout << "Total Quantity of Items in Inventory: " << totalQuantity << endl;

    return 0;
}