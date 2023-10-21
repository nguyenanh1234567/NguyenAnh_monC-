// This program shows an array name being dereferenced with the * operator.
#include <iostream>
using namespace std;

int main()
{
    short numbers[] = {10, 20, 30, 40, 50}; // Array of short integers

    cout << "The first element of the array is ";
    cout << *numbers << endl; // Dereference the array name to get the value of the first element

    return 0;
}