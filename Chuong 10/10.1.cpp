#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char input;

    cout << "Enter any character: ";
    cin.get(input);
    cout << "The character you entered is: " << input << endl;

    if (isalpha(input))
        cout << "That's an alphabetic character.\n"; // Checks if it's a letter
    if (isdigit(input))
        cout << "That's a numeric digit.\n"; // Checks if it's a digit
    if (islower(input))
        cout << "The letter you entered is lowercase.\n"; // Checks if it's lowercase
    if (isupper(input))
        cout << "The letter you entered is uppercase.\n"; // Checks if it's uppercase
    if (isspace(input))
        cout << "That's a whitespace character.\n"; // Checks if it's whitespace

    return 0;
}