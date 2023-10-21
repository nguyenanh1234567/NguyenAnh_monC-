#include <iostream>
using namespace std;

// Function Prototypes
void first();   // Function prototype for first
void second();  // Function prototype for second

int main()
{
    cout << "I am starting in function main.\n";
    first();    // Call function first
    second();   // Call function second
    cout << "Back in function main again.\n";
    return 0;
}

// Definition of function first
void first()
{
    cout << "I am now inside the function first.\n";
}

// Definition of function second
void second()
{
    cout << "I am now inside the function second.\n";
}