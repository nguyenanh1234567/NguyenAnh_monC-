#include <iostream>
#include <map>
using namespace std;

map<char, string> morseCode {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
    {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
    {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
    {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
    {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
    {'Z', "--.."},
};

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    for (char c : input) {
        if (isalpha(c)) {
            cout << morseCode[toupper(c)] << " ";
        } else if (isspace(c)) {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}