#include <iostream>
using namespace std;

int main() {
    // Variables for monthly expenses
    double loanPayment, insurance, gas, oil, tires, maintenance;
    
    // Input expenses
    cout << "Enter the monthly loan payment: $";
    cin >> loanPayment;
    cout << "Enter the monthly insurance cost: $";
    cin >> insurance;
    cout << "Enter the monthly gas cost: $";
    cin >> gas;
    cout << "Enter the monthly oil cost: $";
    cin >> oil;
    cout << "Enter the monthly tire cost: $";
    cin >> tires;
    cout << "Enter the monthly maintenance cost: $";
    cin >> maintenance;
    
    // Calculate total monthly and annual costs
    double totalMonthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;
    double totalAnnualCost = totalMonthlyCost * 12;

    // Display results
    cout << "Total Monthly Cost: $" << totalMonthlyCost << endl;
    cout << "Total Annual Cost: $" << totalAnnualCost << endl;
    
    return 0;
}