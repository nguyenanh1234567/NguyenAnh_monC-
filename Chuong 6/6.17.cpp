#include <iostream>
using namespace std;

void anotherFunction(); // Function prototype
int num = 2; // Global variable

int main()
{
    cout << "In main, num is " << num << endl;
    anotherFunction();
    cout << "Back in main, num is " << num << endl;
    return 0;
}

// Function that changes the global variable num
void anotherFunction()
{
    cout << "In anotherFunction, num is " << num << endl;
    num = 50; // Changing the global variable num
    cout << "But, it is now changed to " << num << endl;
}