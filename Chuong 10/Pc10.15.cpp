#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
    ifstream inputFile("text.txt");
    if (!inputFile) {
        cout << "File not found." << endl;
        return 1;
    }

    char ch;
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;

    while (inputFile.get(ch)) {
        if (isupper(ch)) {
            uppercaseCount++;
        } else if (islower(ch)) {
            lowercaseCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        }
    }

    inputFile.close();

    cout << "Uppercase letters: " << uppercaseCount << endl;
    cout << "Lowercase letters: " << lowercaseCount << endl;
    cout << "Digits: " << digitCount << endl;

    return 0;
}