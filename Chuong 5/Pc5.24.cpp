#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("Random.txt");
    if (!inputFile) {
        cout << "Error opening the file.\n";
        return 1;
    }

    int number;
    int count = 0;
    int sum = 0;

    while (inputFile >> number) {
        sum += number;
        count++;
    }

    inputFile.close();

    if (count > 0) {
        double average = static_cast<double>(sum) / count;

        cout << "Number of numbers in the file: " << count << endl;
        cout << "Sum of all the numbers: " << sum << endl;
        cout << "Average of the numbers: " << average << endl;
    } else {
        cout << "No numbers found in the file.\n";
    }

    return 0;
}