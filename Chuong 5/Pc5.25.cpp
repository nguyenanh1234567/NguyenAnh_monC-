#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt"); // Open the file
    if (!inputFile) {
        cout << "Error opening the file.\n";
        return 1;
    }

    string name;
    int count = 0;

    cout << "Student Line Up:\n";
    
    // Read names from the file until there is no more data to read
    while (getline(inputFile, name)) {
        cout << "Student #" << ++count << ": " << name << endl;
    }

    inputFile.close();

    if (count == 0) {
        cout << "No student names found in the file.\n";
    }

    return 0;
}