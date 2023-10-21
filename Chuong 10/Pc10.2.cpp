#include <iostream>
using namespace std;

void displayBackward(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    cout << "String displayed backward: ";
    displayBackward(input);
    return 0;
}