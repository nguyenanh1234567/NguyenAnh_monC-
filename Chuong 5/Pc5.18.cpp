#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("People.txt");
    if (!inputFile) {
        cerr << "Error opening the file. Make sure the file 'People.txt' exists." << endl;
        return 1;
    }

    const int YEARS[] = {1900, 1920, 1940, 1960, 1980, 2000};
    const int ASTERISK_PER_1000 = 1;  // Each asterisk represents 1,000 people

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    int population;
    for (int i = 0; i < 6; i++) {
        inputFile >> population;
        cout << YEARS[i] << " ";
        for (int j = 0; j < population / 1000; j++) {
            cout << "*";
        }
        cout << endl;
    }

    inputFile.close();
    return 0;
}