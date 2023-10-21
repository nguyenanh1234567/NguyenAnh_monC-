#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ifstream girlNamesFile("GirlNames.txt");
    ifstream boyNamesFile("BoyNames.txt");

    if (!girlNamesFile || !boyNamesFile) {
        cerr << "Error opening input files." << endl;
        return 1;
    }

    vector<string> girlNames;
    vector<string> boyNames;

    // Read girl names from GirlNames.txt
    string girlName;
    while (getline(girlNamesFile, girlName)) {
        girlNames.push_back(girlName);
    }

    // Read boy names from BoyNames.txt
    string boyName;
    while (getline(boyNamesFile, boyName)) {
        boyNames.push_back(boyName);
    }

    // Prompt the user to enter names
    string userName;
    cout << "Enter a boy's name: ";
    getline(cin, userName);

    // Check if the entered boy's name is popular
    if (find(boyNames.begin(), boyNames.end(), userName) != boyNames.end()) {
        cout << userName << " is among the most popular boy names." << endl;
    } else {
        cout << userName << " is not among the most popular boy names." << endl;
    }

    cout << "Enter a girl's name: ";
    getline(cin, userName);

    // Check if the entered girl's name is popular
    if (find(girlNames.begin(), girlNames.end(), userName) != girlNames.end()) {
        cout << userName << " is among the most popular girl names." << endl;
    } else {
        cout << userName << " is not among the most popular girl names." << endl;
    }

    girlNamesFile.close();
    boyNamesFile.close();

    return 0;
}