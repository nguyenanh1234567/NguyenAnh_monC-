#include <iostream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 10;
    int values[ARRAY_SIZE];

    cout << "Enter 10 values: " << endl;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Value " << (i + 1) << ": ";
        cin >> values[i];
    }

    int smallest = values[0];
    int largest = values[0];

    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (values[i] < smallest) {
            smallest = values[i];
        }
        if (values[i] > largest) {
            largest = values[i];
        }
    }

    cout << "Smallest value: " << smallest << endl;
    cout << "Largest value: " << largest << endl;

    return 0;
}