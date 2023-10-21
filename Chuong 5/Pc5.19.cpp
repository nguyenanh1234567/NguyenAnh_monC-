#include <iostream>
using namespace std;

int main() {
    double budget;
    double totalExpenses = 0.0;
    
    cout << "Enter your budget for the month: $";
    cin >> budget;

    char addAnotherExpense;
    
    do {
        double expense;
        
        cout << "Enter an expense amount: $";
        cin >> expense;

        totalExpenses += expense;

        cout << "Do you want to add another expense? (Y/N): ";
        cin >> addAnotherExpense;
    } while (addAnotherExpense == 'Y' || addAnotherExpense == 'y');
    
    double difference = budget - totalExpenses;

    if (difference > 0) {
        cout << "You are under budget by: $" << difference << endl;
    } else if (difference < 0) {
        cout << "You are over budget by: $" << -difference << endl;
    } else {
        cout << "You are right on budget!" << endl;
    }
    
    return 0;
}