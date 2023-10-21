#include <iostream>
using namespace std;

// Function prototype
double fallingDistance(int time);

int main() {
    cout << "Time (s)\tDistance (m)" << endl;
    cout << "-----------------------" << endl;

    for (int time = 1; time <= 10; time++) {
        double distance = fallingDistance(time);
        cout << time << "\t\t" << distance << endl;
    }

    return 0;
}

// Function to calculate falling distance
double fallingDistance(int time) {
    const double g = 9.8; // Acceleration due to gravity (m/s^2)
    return 0.5 * g * time * time; // d = 0.5 * g * t^2
}