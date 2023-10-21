#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void displayJoke(const string& fileName) {
    ifstream file(fileName);

    if (!file.is_open()) {
        cerr << "Error opening the joke file." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

void displayPunchLine(const string& fileName) {
    ifstream file(fileName);

    if (!file.is_open()) {
        cerr << "Error opening the punch line file." << endl;
        return;
    }

    string punchLine;

    while (getline(file, punchLine)) {
        // Do nothing, just keep reading until the last line
    }

    cout << punchLine << endl;
    file.close();
}

int main() {
    const string jokeFile = "joke.txt";
    const string punchLineFile = "punchline.txt";

    displayJoke(jokeFile);
    displayPunchLine(punchLineFile);

    return 0;
}