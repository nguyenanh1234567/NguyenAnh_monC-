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
    displayMessage(); // Call the displayMessage function
    cout << "Back in function main again.\n"; // Display another message
    return 0;
}