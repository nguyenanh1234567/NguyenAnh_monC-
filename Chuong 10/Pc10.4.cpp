#include <iostream>
#include <cctype>
using namespace std;

int countWords(const char* str) {
    int count = 0;
    bool inWord = false;
    int totalLetters = 0;

    while (*str) {
        if (isalpha(*str)) {
            totalLetters++;
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
        str++;
    }

    return totalLetters / count;
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    int wordCount = countWords(input);
    int averageLetters = countWords(input);
    cout << "Number of words in the string: " << wordCount << endl;
    cout << "Average number of letters per word: " << averageLetters << endl;
    return 0;
}