#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string input;       // To hold file input
    fstream nameFile;   // File stream object

    // Open the file in input mode.
    nameFile.open("murphy.txt", ios::in);

    // If the file was successfully opened, continue.
    if (nameFile) {
        // Read the first line from the file.
        getline(nameFile, input);

        // While the last read operation was successful, continue.
        while (nameFile) {
            // Display the last line read.
            cout << input << endl;

            // Read the next line.
            getline(nameFile, input);
        }

        // Close the file.
        nameFile.close();
    }
    else {
        cout << "ERROR: Cannot open file.\n";
    }

    return 0;
}