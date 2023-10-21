#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string fileName;
    ifstream inputFile;
    double number;
    double lowest, highest, total, average;
    int count = 0;

    // Ask the user for the file name
    cout << "Enter the file name: ";
    cin >> fileName;

    // Open the file
    inputFile.open(fileName);

    // Check if the file exists
    if (!inputFile) {
        cout << "Error: Unable to open the file." << endl;
        return 1; // Exit program
    }

    // Read the first number to initialize lowest and highest
    inputFile >> number;
    lowest = number;
    highest = number;

    // Initialize total
    total = 0;

    // Read the numbers from the file and calculate statistics
    while (inputFile >> number) {
        total += number;
        count++;
        if (number < lowest) {
            lowest = number;
        }
        if (number > highest) {
            highest = number;
        }
    }

    // Close the file
    inputFile.close();

    // Calculate the average
    if (count == 0) {
        average = 0; // Avoid division by zero
    } else {
        average = total / count;
    }

    // Display the results
    cout << "Lowest number: " << lowest << endl;
    cout << "Highest number: " << highest << endl;
    cout << "Total of the numbers: " << total << endl;
    cout << "Average of the numbers: " << average << endl;

    return 0;
}