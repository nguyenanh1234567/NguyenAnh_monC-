#include <iostream>
#include <cctype>
using namespace std;

int countVowels(const char* str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int countConsonants(const char* str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (isalpha(*str) && (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char input[100];
    int choice;
    bool exit = false;
    
    while (!exit) {
        cout << "Enter a string: ";
        cin.getline(input, 100);
        cout << "1) Count the number of vowels in the string" << endl;
        cout << "2) Count the number of consonants in the string" << endl;
        cout << "3) Count both the vowels and consonants in the string" << endl;
        cout << "4) Enter another string" << endl;
        cout << "5) Exit the program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Number of vowels in the string: " << countVowels(input) << endl;
                break;
            case 2:
                cout << "Number of consonants in the string: " << countConsonants(input) << endl;
                break;
            case 3:
                cout << "Number of vowels in the string: " << countVowels(input) << endl;
                cout << "Number of consonants in the string: " << countConsonants(input) << endl;
                break;
            case 4:
                break;
            case 5:
                exit = true;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}