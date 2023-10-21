#include <iostream>
using namespace std;

// Function prototype
int* shiftElements(const int arr[], int size);

int main() {
    const int originalSize = 5;
    int originalArray[originalSize] = {1, 2, 3, 4, 5};

    int newSize = originalSize + 1;

    // Call the function to shift the elements
    int* shiftedArray = shiftElements(originalArray, originalSize);

    // Display the original and shifted arrays
    cout << "Original Array: ";
    for (int i = 0; i < originalSize; i++) {
        cout << originalArray[i] << " ";
    }
    cout << endl;

    cout << "Shifted Array: ";
    for (int i = 0; i < newSize; i++) {
        cout << shiftedArray[i] << " ";
    }
    cout << endl;

    // Don't forget to free the dynamically allocated memory
    delete[] shiftedArray;

    return 0;
}

int* shiftElements(const int arr[], int size) {
    int* shifted = new int[size + 1];
    shifted[0] = 0;

    for (int i = 0; i < size; i++) {
        shifted[i + 1] = arr[i];
    }

    return shifted;
}