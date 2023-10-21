#include <iostream>
#include <string>
using namespace std;

struct MonthlyBudget {
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

void enterExpenses(MonthlyBudget& budget) {
    cout << "Enter the amount spent on Housing: ";
    cin >> budget.housing;
    cout << "Enter the amount spent on Utilities: ";
    cin >> budget.utilities;
    cout << "Enter the amount spent on Household Expenses: ";
    cin >> budget.householdExpenses;
    cout << "Enter the amount spent on Transportation: ";
    cin >> budget.transportation;
    cout << "Enter the amount spent on Food: ";
    cin >> budget.food;
    cout << "Enter the amount spent on Medical: ";
    cin >> budget.medical;
    cout << "Enter the amount spent on Insurance: ";
    cin >> budget.insurance;
    cout << "Enter the amount spent on Entertainment: ";
    cin >> budget.entertainment;
    cout << "Enter the amount spent on Clothing: ";
    cin >> budget.clothing;
    cout << "Enter the amount spent on Miscellaneous: ";
    cin >> budget.miscellaneous;
}

void displayBudgetReport(const MonthlyBudget& budget) {
    double totalBudget = 500.0 + 150.0 + 65.0 + 50.0 + 250.0 + 30.0 + 100.0 + 150.0 + 75.0 + 50.0;
    
    cout << "Monthly Budget Report:\n";
    cout << "Category\tBudget\tActual\tDifference\n";
    cout << "---------------------------------------------\n";
    cout << "Housing\t\t500.00\t" << budget.housing << "\t" << budget.housing - 500.0 << endl;
    cout << "Utilities\t150.00\t" << budget.utilities << "\t" << budget.utilities - 150.0 << endl;
    cout << "Household Expenses\t65.00\t" << budget.householdExpenses << "\t" << budget.householdExpenses - 65.0 << endl;
    cout << "Transportation\t50.00\t" << budget.transportation << "\t" << budget.transportation - 50.0 << endl;
    cout << "Food\t\t250.00\t" << budget.food << "\t" << budget.food - 250.0 << endl;
    cout << "Medical\t\t30.00\t" << budget.medical << "\t" << budget.medical - 30.0 << endl;
    cout << "Insurance\t100.00\t" << budget.insurance << "\t" << budget.insurance - 100.0 << endl;
    cout << "Entertainment\t150.00\t" << budget.entertainment << "\t" << budget.entertainment - 150.0 << endl;
    cout << "Clothing\t75.00\t" << budget.clothing << "\t" << budget.clothing - 75.0 << endl;
    cout << "Miscellaneous\t50.00\t" << budget.miscellaneous << "\t" << budget.miscellaneous - 50.0 << endl;
    cout << "---------------------------------------------\n";
    cout << "Total\t\t" << totalBudget << "\t" << (budget.housing + budget.utilities + budget.householdExpenses +
                                                     budget.transportation + budget.food + budget.medical + budget.insurance +
                                                     budget.entertainment + budget.clothing + budget.miscellaneous) << "\t" <<
            (totalBudget - (budget.housing + budget.utilities + budget.householdExpenses +
                            budget.transportation + budget.food + budget.medical + budget.insurance +
                            budget.entertainment + budget.clothing + budget.miscellaneous)) << endl;
}

int main() {
    MonthlyBudget budget;
    enterExpenses(budget);
    displayBudgetReport(budget);
    return 0;
}