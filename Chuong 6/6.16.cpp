#include <iostream>
using namespace std;

void anotherFunction(); // Function prototype

int main()
{
    int num = 1; // Local variable in main

    cout << "In main, num is " << num << endl;
    anotherFunction(); // Call anotherFunction
    cout << "Back in main, num is " << num << endl;

    return 0;
}

// Function that demonstrates a local variable with the same name
void anotherFunction()
{
    int num = 20; // Local variable in anotherFunction

    cout << "In anotherFunction, num is " << num << endl;
}