#include <iostream>
using namespace std;

int main() {
    int totalCustomers = 16500;  // Total number of surveyed customers
    double energyDrinkPercentage = 0.15;  // Percentage of customers purchasing energy drinks
    double citrusFlavoredPercentage = 0.58;  // Percentage of energy drink customers preferring citrus-flavored drinks

    // Calculate the number of customers who purchase energy drinks
    int energyDrinkCustomers = totalCustomers * energyDrinkPercentage;

    // Calculate the number of customers who prefer citrus-flavored energy drinks
    int citrusFlavoredCustomers = energyDrinkCustomers * citrusFlavoredPercentage;

    cout << "Approximate number of customers who purchase energy drinks per week: " << energyDrinkCustomers << endl;
    cout << "Approximate number of customers who prefer citrus-flavored energy drinks: " << citrusFlavoredCustomers << endl;

    return 0;
}