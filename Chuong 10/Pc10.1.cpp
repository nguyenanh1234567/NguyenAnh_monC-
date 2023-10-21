#include <iostream>
using namespace std;

int countCharacters(const char* str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    int length = countCharacters(input);
    cout << "Number of characters in the string: " << length << endl;
    return 0;
}