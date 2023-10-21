#include <iostream>
#include <fstream>
using namespace std;

const int DESC_SIZE = 31; // Description size

struct InventoryItem
{
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main()
{
    InventoryItem record;
    long recNum; // Record number to edit

    // Open the file in binary mode for both input and output.
    fstream inventory("Inventory.dat", ios::in | ios::out | ios::binary);

    // Get the record number of the desired record to edit.
    cout << "Which record do you want to edit? ";
    cin >> recNum;

    // Move to the specified record and read its contents.
    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

    // Display the current record contents.
    cout << "Description: " << record.desc << endl;
    cout << "Quantity: " << record.qty << endl;
    cout << "Price: " << record.price << endl;

    // Get the new record data from the user.
    cout << "Enter the new data:\n";
    cout << "Description: ";
    cin.ignore(); // Clear the newline character from the buffer.
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;

    // Move back to the beginning of this record's position.
    inventory.seekp(recNum * sizeof(record), ios::beg);

    // Write the new record over the current record.
    inventory.write(reinterpret_cast<char *>(&record), sizeof(record));

    // Close the file.
    inventory.close();

    return 0;
}