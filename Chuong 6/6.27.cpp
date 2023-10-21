#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
int square(int);
double square(double);

int main()
{
    int userInt;
    double userFloat;

    // Get an int and a double.
    cout << fixed << showpoint << setprecision(2);
    cout << "Enter an integer and a floating-point value: ";
    cin >> userInt >> userFloat;

    // Display their squares.
    cout << "Here are their squares: ";
    cout << square(userInt) << " and " << square(userFloat) << endl;
    return 0;
}

// Definition of overloaded function square for int
int square(int number)
{
    return number * number;
}

// Definition of overloaded function square for double
double square(double number)
{
    return number * number;
}