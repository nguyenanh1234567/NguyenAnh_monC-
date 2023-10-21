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

void searchCustomerByName(const Customer customers[], int count, const string& name) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (customers[i].name.find(name) != string::npos) {
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
            found = true;
        }
    }

    if (!found) {
        cout << "No customers found with the name: " << name << endl;
    }
}

int main() {
    int customerCount = 3; // Số lượng khách hàng
    Customer customers[3]; // Mảng chứa thông tin các khách hàng

    // Điền thông tin của khách hàng vào mảng customers ở đây

    std::string searchName = "John"; // Tên cần tìm kiếm

    searchCustomerByName(customers, customerCount, searchName);

    return 0;
}