#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, middleName, lastName, arrangedName;

    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your middle name: ";
    getline(cin, middleName);
    cout << "Enter your last name: ";
    getline(cin, lastName);

    arrangedName = lastName + ", " + firstName + " " + middleName;
    cout << "Arranged Name: " << arrangedName << endl;

    return 0;
}