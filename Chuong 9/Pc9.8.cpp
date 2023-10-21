#include <iostream>
using namespace std;

// Function prototype
int findMode(const int *arr, int size);

int main() {
    const int size = 10;
    int values[size] = {1, 2, 3, 2, 5, 6, 3, 7, 7, 9};

    int mode = findMode(values, size);

    if (mode != -1) {
        cout << "The mode of the array is: " << mode << endl;
    } else {
        cout << "The array has no mode (all values occur only once)." << endl;
    }

    return 0;
}

int findMode(const int *arr, int size) {
    if (size == 0) {
        return -1;
    }

    int mode = arr[0];
    int maxCount = 1;

    for (int i = 0; i < size; i++) {
        int count = 1;

        // Count occurrences of the current value
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Check if the current value has a higher frequency
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    // If no value has a frequency greater than 1, there is no mode
    if (maxCount <= 1) {
        return -1;
    }

    return mode;
}