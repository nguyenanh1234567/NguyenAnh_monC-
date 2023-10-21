#include <iostream>
using namespace std;

// Function prototypes
void getNumber(int *);
void doubleValue(int *);

int main()
{
    int number;

    // Call getNumber and pass the address of the 'number' variable.
    getNumber(&number);

    // Call doubleValue and pass the address of the 'number' variable.
    doubleValue(&number);

    // Display the value in 'number'.
    cout << "That value doubled is " << number << endl;
    return 0;
}

// Definition of getNumber. The parameter, 'input', is a pointer.
// This function asks the user for a number, and the value entered
// is stored in the variable pointed to by 'input'.
void getNumber(int *input)
{
    cout << "Enter an integer number: ";
    cin >> *input;
}

// Definition of doubleValue. The parameter, 'val', is a pointer.
// This function multiplies the variable pointed to by 'val' by two.
void doubleValue(int *val)
{
    *val *= 2;
}