#include <iostream>
#include <string>
using namespace std;

char mostFrequentCharacter(const string &str) {
    int count[256] = {0};
    char mostFrequent = ' ';
    int maxCount = 0;

    for (char ch : str) {
        count[ch]++;
        if (count[ch] > maxCount) {
            maxCount = count[ch];
            mostFrequent = ch;
        }
    }

    return mostFrequent;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    char mostFrequent = mostFrequentCharacter(input);
    cout << "The most frequent character in the string is: " << mostFrequent << endl;

    return 0;
}