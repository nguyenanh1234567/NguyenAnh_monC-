#include <iostream>
using namespace std;

// Function prototypes
void arrSelectSort(int *[], int);
void showArrPtr(int *[], int);

int main() {
    int numDonations;

    // Get the number of donations from the user
    cout << "Enter the number of donations: ";
    cin >> numDonations;

    // Dynamically allocate an array to store donations
    int *donations = new int[numDonations];

    // Input the donation values
    for (int i = 0; i < numDonations; i++) {
        cout << "Enter donation " << (i + 1) << ": ";
        cin >> donations[i];
    }

    // Create an array of pointers to donations
    int **arrPtr = new int *[numDonations];
    for (int i = 0; i < numDonations; i++) {
        arrPtr[i] = &donations[i];
    }

    // Sort the elements of the array of pointers
    arrSelectSort(arrPtr, numDonations);

    // Display the sorted donations
    cout << "The donations, sorted in ascending order are: " << endl;
    showArrPtr(arrPtr, numDonations);

    // Free dynamically allocated memory
    delete[] donations;
    delete[] arrPtr;

    return 0;
}

void arrSelectSort(int *arr[], int size) {
    int startScan, minIndex;
    int *minElem;

    for (startScan = 0; startScan < (size - 1); startScan++) {
        minIndex = startScan;
        minElem = arr[startScan];

        for (int index = startScan + 1; index < size; index++) {
            if (*(arr[index]) < *minElem) {
                minElem = arr[index];
                minIndex = index;
            }
        }

        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

void showArrPtr(int *arr[], int size) {
    for (int count = 0; count < size; count++) {
        cout << *(arr[count]) << " ";
    }
    cout << endl;
}