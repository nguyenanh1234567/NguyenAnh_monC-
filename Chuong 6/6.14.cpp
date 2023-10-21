#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void showIntro();
double getCups();
double cupsToOunces(double);

int main()
{
    // Variables for cups and ounces
    double cups, ounces;

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(1);

    // Display an introductory screen.
    showIntro();

    // Get the number of cups.
    cups = getCups();

    // Convert cups to fluid ounces.
    ounces = cupsToOunces(cups);

    // Display the result.
    cout << cups << " cups equals " << ounces << " ounces.\n";

    return 0;
}

// Function to display an introductory screen.
void showIntro()
{
    cout << "This program converts measurements\n"
         << "in cups to fluid ounces. For your\n"
         << "reference, the formula is:\n"
         << "1 cup = 8 fluid ounces\n\n";
}

// Function to get the number of cups from the user.
double getCups()
{
    double numCups;
    cout << "Enter the number of cups: ";
    cin >> numCups;
    return numCups;
}

// Function to convert cups to fluid ounces.
double cupsToOunces(double numCups)
{
    return numCups * 8.0;
}