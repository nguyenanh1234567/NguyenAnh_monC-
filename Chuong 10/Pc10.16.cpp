#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isVowel(char c) {
    char vowels[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
    for (char vowel : vowels) {
        if (c == vowel) {
            return true;
        }
    }
    return false;
}

string toPigLatin(const string& word) {
    if (word.empty()) {
        return "";
    }
    
    if (isVowel(word[0])) {
        return word + "ay";
    } else {
        return word.substr(1) + word[0] + "ay";
    }
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    istringstream stream(sentence);
    string word;
    while (stream >> word) {
        cout << toPigLatin(word) << " ";
    }

    cout << endl;
    return 0;
}