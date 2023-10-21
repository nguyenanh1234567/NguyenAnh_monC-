#include <iostream>
using namespace std;

int main() {
    double gallons, miles, mpg;

    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> gallons;

    cout << "Enter the number of miles the car can be driven on a full tank: ";
    cin >> miles;

    // Calculate miles per gallon (mpg)
    mpg = miles / gallons;

    cout << "The car's gas mileage is " << mpg << " miles per gallon." << endl;

    return 0;
}