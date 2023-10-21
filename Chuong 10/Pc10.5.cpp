#include <iostream>
#include <cctype>
using namespace std;

void capitalizeSentences(char* str) {
    bool newSentence = true;

    while (*str) {
        if (isalpha(*str)) {
            if (newSentence) {
                *str = toupper(*str);
                newSentence = false;
            } else {
                *str = tolower(*str);
            }
        } else if (*str == '.' || *str == '?' || *str == '!') {
            newSentence = true;
        }
        str++;
    }
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    capitalizeSentences(input);
    cout << "Modified string: " << input << endl;
    return 0;
}