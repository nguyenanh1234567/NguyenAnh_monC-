#include <iostream>
#include <fstream>
#include <string>
#include <conio.h> // For _getch()

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

    while (getline(file, line)) {
        cout << line << endl;
        lineCount++;

        if (lineCount % 24 == 0) {
            cout << "Press any key to continue...";
            _getch();
        }
    }

    file.close();

    return 0;
}