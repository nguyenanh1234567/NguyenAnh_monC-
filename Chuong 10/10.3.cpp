#include <iostream>
#include <cctype> // Include the cctype library for toupper function
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159; // Constant for pi
    double radius; // The circle's radius
    char goAgain; // To hold Y or N

    cout << "This program calculates the area of a circle.\n";
    cout << fixed << setprecision(2);

    do
    {
        // Get the radius and display the area.
        cout << "Enter the circle's radius: ";
        cin >> radius;
        cout << "The area is " << (PI * radius * radius);
        cout << endl;

        // Does the user want to do this again?
        cout << "Calculate another? (Y or N) ";
        cin >> goAgain;

        // Validate the input using toupper to ensure case insensitivity.
        while (toupper(goAgain) != 'Y' && toupper(goAgain) != 'N')
        {
            cout << "Please enter Y or N: ";
            cin >> goAgain;
        }

    } while (toupper(goAgain) == 'Y'); // Continue if the user enters 'Y' or 'y'

    return 0;
}