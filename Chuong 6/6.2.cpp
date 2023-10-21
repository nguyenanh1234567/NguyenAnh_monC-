#include <iostream>
using namespace std;

// Definition of function displayMessage
// This function displays a greeting.
void displayMessage()
{
    cout << "Hello from the function displayMessage.\n";
}

// Function main
int main()
{
    cout << "Hello from main.\n"; // Display a message
    for (int count = 0; count < 5; count++)
    {
        displayMessage(); // Call displayMessage five times
    }
    cout << "Back in function main again.\n"; // Display another message
    return 0;
}