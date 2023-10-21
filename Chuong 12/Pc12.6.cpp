#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName, searchString;
    cout << "Enter the name of the file: ";
    cin >> fileName;
    cout << "Enter the string to search for: ";
    cin >> searchString;

    ifstream file(fileName);
    string line;
    int count = 0;

    if (!file.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    while (getline(file, line)) {
        size_t found = line.find(searchString);
        if (found != string::npos) {
            cout << "Found at line " << count + 1 << ": " << line << endl;
            count++;
        }
    }

    file.close();

    cout << "The string \"" << searchString << "\" was found " << count << " times in the file." << endl;

    return 0;
}