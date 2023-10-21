#include <iostream>
using namespace std;

int main() {
    double speed, hours;

    // Get the speed of the vehicle (in mph)
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    // Input validation: Do not accept a negative number for speed
    if (speed < 0) {
        cout << "Please enter a non-negative speed." << endl;
        return 1; // Exit the program with an error code
    }

    // Get the number of hours the vehicle has traveled
    cout << "How many hours has it traveled? ";
    cin >> hours;

    // Input validation: Do not accept values less than 1 for time traveled
    if (hours < 1) {
        cout << "Please enter a time traveled greater than or equal to 1 hour." << endl;
        return 1; // Exit the program with an error code
    }

    cout << "Hour\tDistance Traveled" << endl;
    cout << "---------------------" << endl;

    for (int hour = 1; hour <= hours; hour++) {
        double distance = speed * hour;
        cout << hour << "\t" << distance << endl;
    }

    return 0;
}