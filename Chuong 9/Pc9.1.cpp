#include <iostream>

int* allocateIntArray(int numElements) {
    // Check for a valid number of elements
    if (numElements <= 0) {
        std::cerr << "Invalid number of elements. Please provide a positive number." << std::endl;
        return nullptr; // Return nullptr on error
    }

    int* newArray = new int[numElements];
    return newArray;
}

int main() {
    int numElements;

    // Get the number of elements from the user
    std::cout << "Enter the number of elements: ";
    std::cin >> numElements;

    int* dynamicArray = allocateIntArray(numElements);

    if (dynamicArray != nullptr) {
        // The dynamicArray now points to an array of 'numElements' integers
        // You can access and manipulate the array as needed

        // Don't forget to release the memory when you're done
        delete[] dynamicArray;
        dynamicArray = nullptr;
    }

    return 0;
}