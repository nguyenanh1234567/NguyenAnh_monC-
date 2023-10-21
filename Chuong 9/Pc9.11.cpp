#include <iostream>
using namespace std;

// Function prototype
int* expandArray(const int arr[], int &size);

int main() {
    const int originalSize = 5;
    int originalArray[originalSize] = {1, 2, 3, 4, 5};

    int newSize = originalSize * 2;
    
    // Call the function to expand the array
    int* expandedArray = expandArray(originalArray, newSize);

    // Display the original and expanded arrays
    cout << "Original Array: ";
    for (int i = 0; i < originalSize; i++) {
        cout << originalArray[i] << " ";
    }
    cout << endl;

    cout << "Expanded Array: ";
    for (int i = 0; i < newSize; i++) {
        cout << expandedArray[i] << " ";
    }
    cout << endl;

    // Don't forget to free the dynamically allocated memory
    delete[] expandedArray;

    return 0;
}

int* expandArray(const int arr[], int &size) {
    int* expanded = new int[size];

    // Copy elements from the original array
    for (int i = 0; i < size / 2; i++) {
        expanded[i] = arr[i];
    }

    // Initialize the unused elements with 0
    for (int i = size / 2; i < size; i++) {
        expanded[i] = 0;
    }

    return expanded;
}