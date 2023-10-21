#include <iostream>
using namespace std;

int main() {
    int sideLength;

    // Ask the user for a positive integer no greater than 15
    cout << "Enter a positive integer (1-15) for the side length of the square: ";
    cin >> sideLength;

    if (sideLength < 1 || sideLength > 15) {
        cout << "Please enter a valid number between 1 and 15." << endl;
    } else {
        // Display the square
        for (int i = 0; i < sideLength; i++) {
            for (int j = 0; j < sideLength; j++) {
                cout << "X";
            }
            cout << endl;
        }
    }

    return 0;
}