#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void encryptFile(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Error opening files." << endl;
        return;
    }

    char c;
    while (inputFile.get(c)) {
        c = c + 10; // Simple encryption, add 10 to ASCII code
        outputFile.put(c);
    }

    inputFile.close();
    outputFile.close();

    cout << "File encrypted successfully." << endl;
}

int main() {
    string inputFileName = "input.txt";
    string outputFileName = "encrypted.txt";

    encryptFile(inputFileName, outputFileName);

    return 0;
}