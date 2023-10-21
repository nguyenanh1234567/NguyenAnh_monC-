#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Define a structure for inventory items
struct InventoryItem {
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

// Function to add a new record to the inventory file
void addRecord(fstream& file, InventoryItem item) {
    file.seekp(0, ios::end);
    file << item.description << " " << item.quantity << " " << item.wholesaleCost << " " << item.retailCost << " " << item.dateAdded << endl;
}

// Function to display a record from the inventory file
void displayRecord(fstream& file, int recordNumber) {
    file.clear();
    file.seekg(0, ios::beg);

    InventoryItem item;
    int currentRecord = 0;

    while (file >> item.description >> item.quantity >> item.wholesaleCost >> item.retailCost >> item.dateAdded) {
        if (currentRecord == recordNumber) {
            cout << "Description: " << item.description << endl;
            cout << "Quantity: " << item.quantity << endl;
            cout << "Wholesale Cost: " << item.wholesaleCost << endl;
            cout << "Retail Cost: " << item.retailCost << endl;
            cout << "Date Added: " << item.dateAdded << endl;
            return;
        }
        currentRecord++;
    }

    cout << "Record not found!" << endl;
}

// Function to change a record in the inventory file
void changeRecord(fstream& file, int recordNumber, InventoryItem newItem) {
    file.clear();
    file.seekg(0, ios::beg);

    InventoryItem item;
    int currentRecord = 0;

    while (file >> item.description >> item.quantity >> item.wholesaleCost >> item.retailCost >> item.dateAdded) {
        if (currentRecord == recordNumber) {
            file.seekp(file.tellg());
            file << newItem.description << " " << newItem.quantity << " " << newItem.wholesaleCost << " " << newItem.retailCost << " " << newItem.dateAdded << endl;
            cout << "Record updated successfully!" << endl;
            return;
        }
        currentRecord++;
    }

    cout << "Record not found!" << endl;
}

int main() {
    fstream inventoryFile("inventory.txt", ios::in | ios::out | ios::app);

    if (!inventoryFile) {
        cerr << "Error opening inventory file." << endl;
        return 1;
    }

    while (true) {
        cout << "Inventory Program Menu:" << endl;
        cout << "1. Add new record" << endl;
        cout << "2. Display a record" << endl;
        cout << "3. Change a record" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            InventoryItem newItem;
            cout << "Enter Description: ";
            cin >> newItem.description;
            cout << "Enter Quantity: ";
            cin >> newItem.quantity;
            cout << "Enter Wholesale Cost: ";
            cin >> newItem.wholesaleCost;
            cout << "Enter Retail Cost: ";
            cin >> newItem.retailCost;
            cout << "Enter Date Added: ";
            cin >> newItem.dateAdded;

            addRecord(inventoryFile, newItem);
        } else if (choice == 2) {
            cout << "Enter record number to display: ";
            int recordNumber;
            cin >> recordNumber;
            displayRecord(inventoryFile, recordNumber);
        } else if (choice == 3) {
            int recordNumber;
            cout << "Enter record number to change: ";
            cin >> recordNumber;

            InventoryItem newItem;
            cout << "Enter new Description: ";
            cin >> newItem.description;
            cout << "Enter new Quantity: ";
            cin >> newItem.quantity;
            cout << "Enter new Wholesale Cost: ";
            cin >> newItem.wholesaleCost;
            cout << "Enter new Retail Cost: ";
            cin >> newItem.retailCost;
            cout << "Enter new Date Added: ";
            cin >> newItem.dateAdded;

            changeRecord(inventoryFile, recordNumber, newItem);
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    inventoryFile.close();

    return 0;
}