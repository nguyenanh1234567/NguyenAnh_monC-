#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    cout << "Enter the name of a file: ";
    cin >> fileName;

    ifstream file(fileName);

    if (!file.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    string line;
    int lineCount = 0;

    while (getline(file, line)) {
        lineCount++;
        cout << lineCount << ":" << line << endl;
    }

    file.close();

    return 0;
}