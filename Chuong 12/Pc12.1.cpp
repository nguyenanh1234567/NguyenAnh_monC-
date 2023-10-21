#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    cout << "Enter the name of the file: ";
    cin >> fileName;

    ifstream file(fileName);

    if (!file.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    string line;
    int lineCount = 0;

    while (getline(file, line) && lineCount < 10) {
        cout << line << endl;
        lineCount++;
    }

    if (lineCount < 10) {
        cout << "The entire file has been displayed." << endl;
    }

    file.close();

    return 0;
}