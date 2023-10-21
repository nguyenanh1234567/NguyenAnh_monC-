#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function prototypes
double calculateAverage(const int[], int);
double calculateMedian(const int[], int);
int calculateMode(const int[], int);

int main() {
    int numStudents;

    // Step A: Ask the user how many students were surveyed
    cout << "How many students were surveyed? ";
    cin >> numStudents;

    if (numStudents <= 0) {
        cout << "Please enter a valid number of students." << endl;
        return 1;
    }

    // Dynamically allocate an array of integers with this many elements
    int* movieData = new int[numStudents];

    // Step B: Allow the user to enter the number of movies each student saw
    cout << "Enter the number of movies each student saw (non-negative only):" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> movieData[i];

        if (movieData[i] < 0) {
            cout << "Invalid input. Please enter a non-negative number." << endl;
            i--; // Allow the user to re-enter data for this student
        }
    }

    // Step C: Calculate and display the average, median, and mode
    double average = calculateAverage(movieData, numStudents);
    double median = calculateMedian(movieData, numStudents);
    int mode = calculateMode(movieData, numStudents);

    cout << "Average: " << average << endl;
    cout << "Median: " << median << endl;
    cout << "Mode: " << mode << endl;

    // Deallocate the dynamically allocated memory
    delete[] movieData;

    return 0;
}

// Function to calculate the average
double calculateAverage(const int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (size > 0) ? (sum / size) : 0;
}

// Function to calculate the median
double calculateMedian(const int arr[], int size) {
    int* tempArr = new int[size];
    copy(arr, arr + size, tempArr);
    sort(tempArr, tempArr + size);

    double median;
    if (size % 2 == 0) {
        median = (tempArr[size / 2 - 1] + tempArr[size / 2]) / 2.0;
    } else {
        median = tempArr[size / 2];
    }

    delete[] tempArr;
    return median;
}

// Function to calculate the mode
int calculateMode(const int arr[], int size) {
    vector<int> values(arr, arr + size);
    sort(values.begin(), values.end());

    int mode = -1;
    int maxCount = 0;

    int current = values[0];
    int currentCount = 1;

    for (int i = 1; i < size; i++) {
        if (values[i] == current) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                mode = current;
            }
            current = values[i];
            currentCount = 1;
        }
    }

    if (currentCount > maxCount) {
        mode = current;
    }

    return mode;
}