#include <iostream>
using namespace std;

// Demo class declaration.
class Demo
{
public:
    Demo(); // Constructor declaration
};

// Constructor definition
Demo::Demo()
{
    cout << "Welcome to the constructor!\n";
}

int main()
{
    Demo demoObject; // Define a Demo object

    cout << "This program demonstrates an object with a constructor.\n";
    return 0;
}