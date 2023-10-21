#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string fileName;
    cout << "Enter the name of the file: ";
    cin >> fileName;

    ifstream file(fileName);
    vector<string> lines;
    string line;

    if (!file.is_open()) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    while (getline(file, line)) {
        lines.push_back(line);
        if (lines.size() > 10) {
            lines.erase(lines.begin());
        }
    }

    file.close();

    for (const string& l : lines) {
        cout << l << endl;
    }

    return 0;
}