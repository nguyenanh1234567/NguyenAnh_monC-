#include <iostream>
#include <string>
using namespace std;

struct Customer {
    string name;
    string address;
    string city;
    string state;
    string zip;
    string phoneNumber;
    double accountBalance;
    string lastPaymentDate;
};

int main() {
    const int MAX_CUSTOMERS = 10;
    Customer customers[MAX_CUSTOMERS];
    int customerCount = 0;

    while (true) {
        cout << "Customer Accounts Menu:\n";
        cout << "1. Add New Customer\n";
        cout << "2. Update Customer Data\n";
        cout << "3. Display All Customers\n";
        cout << "4. Exit\n";
        int choice;
        cin >> choice;

        if (choice == 1 && customerCount < MAX_CUSTOMERS) {
            Customer newCustomer;
            cout << "Enter Customer Name: ";
            cin.ignore();
            getline(cin, newCustomer.name);
            cout << "Enter Address: ";
            getline(cin, newCustomer.address);
            cout << "Enter City: ";
            getline(cin, newCustomer.city);
            cout << "Enter State: ";
            getline(cin, newCustomer.state);
            cout << "Enter ZIP: ";
            getline(cin, newCustomer.zip);
            cout << "Enter Telephone Number: ";
            getline(cin, newCustomer.phoneNumber);
            cout << "Enter Account Balance: ";
            cin >> newCustomer.accountBalance;
            cout << "Enter Last Payment Date: ";
            cin.ignore();
            getline(cin, newCustomer.lastPaymentDate);

            customers[customerCount] = newCustomer;
            customerCount++;
        } else if (choice == 2) {
            // Add code to update customer data
        } else if (choice == 3) {
            cout << "Customer Accounts:\n";
            for (int i = 0; i < customerCount; i++) {
                cout << "Customer " << (i + 1) << ":\n";
                cout << "Name: " << customers[i].name << endl;
                cout << "Address: " << customers[i].address << endl;
                cout << "City: " << customers[i].city << endl;
                cout << "State: " << customers[i].state << endl;
                cout << "ZIP: " << customers[i].zip << endl;
                cout << "Telephone Number: " << customers[i].phoneNumber << endl;
                cout << "Account Balance: " << customers[i].accountBalance << endl;
                cout << "Last Payment Date: " << customers[i].lastPaymentDate << endl;
                cout << "---------------------\n";
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}