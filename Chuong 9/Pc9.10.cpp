#include <iostream>
using namespace std;

// Function prototype
int* reverseArray(const int arr[], int size);

int main() {
    const int size = 5;
    int originalArray[size] = {1, 2, 3, 4, 5};

    // Call the function to reverse the array
    int* reversedArray = reverseArray(originalArray, size);

    // Display the reversed array
    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << originalArray[i] << " ";
    }
    cout << endl;

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << reversedArray[i] << " ";
    }
    cout << endl;

    // Don't forget to free the dynamically allocated memory
    delete[] reversedArray;

    return 0;
}

int* reverseArray(const int arr[], int size) {
    // Create a new array dynamically
    int* reversed = new int[size];

    // Copy elements in reverse order
    for (int i = 0; i < size; i++) {
        reversed[i] = arr[size - 1 - i];
    }

    return reversed;
}