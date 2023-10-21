#include <iostream>
#include <string>
using namespace std;

struct InventoryBin {
    string description;
    int quantity;
};

void addParts(InventoryBin& bin, int quantity) {
    if (quantity >= 0 && bin.quantity + quantity <= 30) {
        bin.quantity += quantity;
    } else {
        cout << "Invalid quantity. Quantity must be non-negative and not exceed the bin's limit (30).\n";
    }
}

void removeParts(InventoryBin& bin, int quantity) {
    if (quantity >= 0 && bin.quantity - quantity >= 0) {
        bin.quantity -= quantity;
    } else {
        cout << "Invalid quantity. Quantity must be non-negative and not exceed the available quantity.\n";
    }
}

int main() {
    InventoryBin bins[10] = {{"Valve", 10}, {"Bearing", 5}, {"Bushing", 15}, {"Coupling", 21}, {"Flange", 7},
                             {"Gear", 5}, {"Gear Housing", 5}, {"Vacuum Gripper", 25}, {"Cable", 18}, {"Rod", 12}};
    
    while (true) {
        cout << "Inventory Bins:\n";
        for (int i = 0; i < 10; i++) {
            cout << i + 1 << ". " << bins[i].description << " - " << bins[i].quantity << " parts\n";
        }
        
        int choice;
        cout << "Select a bin to add or remove parts (1-10) or enter '0' to quit: ";
        cin >> choice;
        
        if (choice == 0) {
            break;
        } else if (choice >= 1 && choice <= 10) {
            cout << "1. Add parts\n2. Remove parts\nSelect an operation: ";
            int operation;
            cin >> operation;
            
            if (operation == 1) {
                int quantityToAdd;
                cout << "Enter the quantity to add: ";
                cin >> quantityToAdd;
                addParts(bins[choice - 1], quantityToAdd);
            } else if (operation == 2) {
                int quantityToRemove;
                cout << "Enter the quantity to remove: ";
                cin >> quantityToRemove;
                removeParts(bins[choice - 1], quantityToRemove);
            } else {
                cout << "Invalid operation. Please select 1 to add parts or 2 to remove parts.\n";
            }
        } else {
            cout << "Invalid bin selection. Please select a bin from 1 to 10 or '0' to quit.\n";
        }
    }
    
    return 0;
}