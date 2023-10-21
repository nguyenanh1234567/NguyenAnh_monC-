#include <iostream>
using namespace std;

// Function prototype
bool isEven(int);

int main()
{
    int val;

    // Get an integer from the user.
    cout << "Enter an integer, and I will tell you if it is even or odd: ";
    cin >> val;

    // Check if it's even or odd and display the result.
    if (isEven(val))
        cout << val << " is even.\n";
    else
        cout << val << " is odd.\n";

    return 0;
}

// Function to determine if a number is even or odd.
bool isEven(int number)
{
    return (number % 2 == 0);
}