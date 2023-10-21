#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants for ticket prices
    const double CLASS_A_PRICE = 15.0;
    const double CLASS_B_PRICE = 12.0;
    const double CLASS_C_PRICE = 9.0;

    // Variables to store the number of tickets sold for each class
    int classATickets, classBTickets, classCTickets;

    // Prompt the user to enter the number of tickets sold for each class
    cout << "Enter the number of Class A tickets sold: ";
    cin >> classATickets;

    cout << "Enter the number of Class B tickets sold: ";
    cin >> classBTickets;

    cout << "Enter the number of Class C tickets sold: ";
    cin >> classCTickets;

    // Calculate the total income generated from ticket sales
    double totalIncome = (classATickets * CLASS_A_PRICE) + (classBTickets * CLASS_B_PRICE) + (classCTickets * CLASS_C_PRICE);

    // Display the total income in fixed-point notation with two decimal places
    cout << fixed << setprecision(2);
    cout << "Total income generated from ticket sales: $" << totalIncome << endl;

    return 0;
}