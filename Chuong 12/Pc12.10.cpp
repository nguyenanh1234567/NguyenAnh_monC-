#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void decryptFile(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Error opening files." << endl;
        return;
    }

    char c;
    while (inputFile.get(c)) {
        c = c - 10; // Decrypt by subtracting 10 from ASCII code
        outputFile.put(c);
    }

    inputFile.close();
    outputFile.close();

    cout << "File decrypted successfully." << endl;
}

int main() {
    string inputFileName = "encrypted.txt";
    string outputFileName = "decrypted.txt";

    decryptFile(inputFileName, outputFileName);

    return 0;
}