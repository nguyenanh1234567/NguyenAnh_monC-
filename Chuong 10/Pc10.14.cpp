#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a sentence with run-together words: ";
    getline(cin, input);

    for (size_t i = 0; i < input.length(); i++) {
        if (i == 0 || islower(input[i])) {
            cout << input[i];
        } else {
            cout << " " << input[i];
        }
    }

    cout << endl;
    return 0;
}