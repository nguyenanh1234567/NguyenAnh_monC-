// This program uses the & operator to determine a variable's address
// and the sizeof operator to determine its size.
#include <iostream>
using namespace std;

int main()
{
    int x = 25;

    cout << "The address of x is " << &x << endl; // Print the address of variable x
    cout << "The size of x is " << sizeof(x) << " bytes\n"; // Print the size of variable x in bytes
    cout << "The value in x is " << x << endl; // Print the value stored in variable x
    return 0;
}