#include <iostream>
#include <cmath> // Required for the pow() function
using namespace std;

// Function prototype
double kineticEnergy(double mass, double velocity);

int main() {
    double mass, velocity;

    cout << "Enter the mass of the object (in kilograms): ";
    cin >> mass;

    cout << "Enter the velocity of the object (in meters per second): ";
    cin >> velocity;

    double ke = kineticEnergy(mass, velocity);

    cout << "The kinetic energy of the object is: " << ke << " joules" << endl;

    return 0;
}

// Function to calculate kinetic energy
double kineticEnergy(double mass, double velocity) {
    return 0.5 * mass * pow(velocity, 2); // KE = 0.5 * mass * velocity^2
}