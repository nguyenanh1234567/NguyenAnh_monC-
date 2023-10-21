#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

// Function to display the array
void displayArray(int arr[][COLS]) {
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

// Function to calculate the total of all values in the array
int getTotal(int arr[][COLS]) {
    int total = 0;
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            total += arr[row][col];
        }
    }
    return total;
}

// Function to calculate the average of all values in the array
double getAverage(int arr[][COLS]) {
    int total = getTotal(arr);
    return static_cast<double>(total) / (ROWS * COLS);
}

// Function to calculate the total of values in a specified row
int getRowTotal(int arr[][COLS], int row) {
    int total = 0;
    for (int col = 0; col < COLS; col++) {
        total += arr[row][col];
    }
    return total;
}

// Function to calculate the total of values in a specified column
int getColumnTotal(int arr[][COLS], int col) {
    int total = 0;
    for (int row = 0; row < ROWS; row++) {
        total += arr[row][col];
    }
    return total;
}

// Function to find the highest value in a specified row
int getHighestInRow(int arr[][COLS], int row) {
    int highest = arr[row][0];
    for (int col = 1; col < COLS; col++) {
        if (arr[row][col] > highest) {
            highest = arr[row][col];
        }
    }
    return highest;
}

// Function to find the lowest value in a specified row
int getLowestInRow(int arr[][COLS], int row) {
    int lowest = arr[row][0];
    for (int col = 1; col < COLS; col++) {
        if (arr[row][col] < lowest) {
            lowest = arr[row][col];
        }
    }
    return lowest;
}

int main() {
    int testArray[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Array elements:" << endl;
    displayArray(testArray);

    cout << "Total of all values: " << getTotal(testArray) << endl;
    cout << "Average of all values: " << getAverage(testArray) << endl;
    cout << "Total of values in row 1: " << getRowTotal(testArray, 1) << endl;
    cout << "Total of values in column 2: " << getColumnTotal(testArray, 2) << endl;
    cout << "Highest value in row 0: " << getHighestInRow(testArray, 0) << endl;
    cout << "Lowest value in row 2: " << getLowestInRow(testArray, 2) << endl;

    return 0;
}