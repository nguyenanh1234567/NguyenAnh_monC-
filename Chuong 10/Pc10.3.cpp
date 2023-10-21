#include <iostream>
using namespace std;

int countWords(const char* str) {
    int count = 0;
    bool inWord = false;

    while (*str) {
        if (isalpha(*str) && !inWord) {
            count++;
            inWord = true;
        }
        if (!isalpha(*str) && inWord) {
            inWord = false;
        }
        str++;
    }
    return count;
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    int wordCount = countWords(input);
    cout << "Number of words in the string: " << wordCount << endl;
    return 0;
}