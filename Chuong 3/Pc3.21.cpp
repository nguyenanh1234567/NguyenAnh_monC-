#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.14159;
    const double sliceArea = 14.125;

    double diameter, radius, pizzaArea;
    int numberOfSlices;

    // Input
    cout << "Enter the diameter of the pizzas to be ordered (in inches): ";
    cin >> diameter;

    // Calculate the radius and pizza area
    radius = diameter / 2.0;
    pizzaArea = PI * pow(radius, 2.0);

    // Calculate the number of slices per pizza
    numberOfSlices = static_cast<int>(pizzaArea / sliceArea);

    int numberOfPeople;
    cout << "Enter the number of people at the party: ";
    cin >> numberOfPeople;

    // Calculate the number of pizzas needed for the party
    int pizzasNeeded = ceil(static_cast<double>(numberOfPeople * 4) / numberOfSlices);

    // Display the result
    cout << "You should order " << pizzasNeeded << " pizzas for the party." << endl;

    return 0;
}