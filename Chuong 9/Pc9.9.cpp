#include <iostream>
using namespace std;

// Function prototype
double findMedian(const int *arr, int size);

int main() {
    const int size = 10;
    int values[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    double median = findMedian(values, size);

    cout << "The median of the array is: " << median << endl;

    return 0;
}

double findMedian(const int *arr, int size) {
    // Calculate the index of the middle value
    int middle = size / 2;

    // If the size is even, return the average of the two middle values
    if (size % 2 == 0) {
        double middleValue1 = *(arr + middle - 1); // Pointer notation
        double middleValue2 = *(arr + middle);     // Pointer notation
        return (middleValue1 + middleValue2) / 2.0;
    } else {
        return *(arr + middle); // Pointer notation
    }
}