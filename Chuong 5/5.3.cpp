#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    // This while loop will continue as long as 'number' is less than 5.
    while (number < 5)
    {
        cout << "Hello\n";
        number++; // Increment 'number' by 1 in each iteration.
    }

    cout << "That's all!\n"; // This is executed after the loop finishes.
    return 0;
}