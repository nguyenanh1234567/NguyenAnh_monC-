#include <iostream>
#include <fstream>
#include <string>
#include <cctype> // For isupper and islower

using namespace std;

int main() {
    string inputFileName, outputFileName;
    cout << "Enter the name of the input file: ";
    cin >> inputFileName;
    cout << "Enter the name of the output file: ";
    cin >> outputFileName;

    ifstream inFile(inputFileName);
    ofstream outFile(outputFileName);

    if (!inFile.is_open() || !outFile.is_open()) {
        cerr << "Error opening files." << endl;
        return 1;
    }

    bool newSentence = true;
    char c;

    while (inFile.get(c)) {
        if (newSentence && islower(c)) {
            outFile.put(toupper(c));
            newSentence = false;
        } else {
            outFile.put(tolower(c));
        }

        if (c == '.') {
            newSentence = true;
        }
    }

    inFile.close();
    outFile.close();

    cout << "Sentence filter completed." << endl;

    return 0;
}