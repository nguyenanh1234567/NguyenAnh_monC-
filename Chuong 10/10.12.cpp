#include <iostream>
using namespace std;

void stringCopy(char [], char []); // Function prototype

int main()
{
    const int LENGTH = 30;
    char first[LENGTH];
    char second[LENGTH];

    cout << "Enter a string with no more than " << (LENGTH - 1) << " characters:\n";
    cin.getline(first, LENGTH);

    stringCopy(first, second);

    cout << "The string you entered is:\n" << second << endl;

    return 0;
}

void stringCopy(char string1[], char string2[])
{
    int index = 0;

    while (string1[index] != '\0')
    {
        string2[index] = string1[index];
        index++;
    }

    string2[index] = '\0';
}