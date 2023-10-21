#include <iostream>
using namespace std;

int main() {
    // Constants
    const double WIDGET_WEIGHT = 12.5; // Weight of a single widget

    // Variables
    double palletWeight, totalWeight;
    int numberOfWidgets;

    // Input
    cout << "Enter the weight of the pallet (in pounds): ";
    cin >> palletWeight;
    cout << "Enter the total weight of the pallet with widgets (in pounds): ";
    cin >> totalWeight;

    // Calculate the number of widgets
    numberOfWidgets = (totalWeight - palletWeight) / WIDGET_WEIGHT;

    // Display the result
    cout << "Number of widgets stacked on the pallet: " << numberOfWidgets << endl;

    return 0;
}