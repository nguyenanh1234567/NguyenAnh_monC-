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
    cout << "Enter the diameter of the pizza (in inches): ";
    cin >> diameter;

    // Calculate the radius and pizza area
    radius = diameter / 2.0;
    pizzaArea = PI * pow(radius, 2.0);

    // Calculate the number of slices
    numberOfSlices = static_cast<int>(pizzaArea / sliceArea);

    // Display the result
    cout << fixed << setprecision(1);
    cout << "The number of slices that can be taken from the pizza: " << numberOfSlices << " slices" << endl;

    return 0;
}