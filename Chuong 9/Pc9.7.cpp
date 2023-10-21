#include <iostream>
using namespace std;

// Function prototypes
void arrSelectSortDescending(int *[], int);
void showArrPtr(int *[], int);

int main() {
    const int NUM_DONATIONS = 15; // Number of donations

    // An array containing the donation amounts.
    int donations[NUM_DONATIONS] = {5, 100, 5, 25, 10, 5, 25, 5, 5, 100, 10, 15, 10, 5, 10};

    // Create an array of pointers to donations
    int *arrPtr[NUM_DONATIONS] = {nullptr, nullptr, nullptr, nullptr, nullptr,
                                 nullptr, nullptr, nullptr, nullptr, nullptr,
                                 nullptr, nullptr, nullptr, nullptr, nullptr};

    // Each element of arrPtr is a pointer to int. Make each
    // element point to an element in the donations array.
    for (int count = 0; count < NUM_DONATIONS; count++)
        arrPtr[count] = &donations[count];

    // Sort the elements of the array of pointers in descending order.
    arrSelectSortDescending(arrPtr, NUM_DONATIONS);

    // Display the donations using the array of pointers. This
    // will display them in sorted order (descending).
    cout << "The donations, sorted in descending order are: " << endl;
    showArrPtr(arrPtr, NUM_DONATIONS);

    return 0;
}

void arrSelectSortDescending(int *arr[], int size) {
    int startScan, maxIndex;
    int *maxElem;

    for (startScan = 0; startScan < (size - 1); startScan++) {
        maxIndex = startScan;
        maxElem = arr[startScan];

        for (int index = startScan + 1; index < size; index++) {
            if (*(arr[index]) > *maxElem) {
                maxElem = arr[index];
                maxIndex = index;
            }
        }

        arr[maxIndex] = arr[startScan];
        arr[startScan] = maxElem;
    }
}

void showArrPtr(int *arr[], int size) {
    for (int count = 0; count < size; count++) {
        cout << *(arr[count]) << " ";
    }
    cout << endl;
}