#include <iostream>
using namespace std;

int main()
{
    char again;

    do
    {
        // Display a message
        cout << "C++ programming is great fun!" << endl;
        cout << "Do you want to see the message again? ";
        cin >> again;

    } while (again == 'Y' || again == 'y'); // Continue if the user enters 'Y' or 'y'

    return 0;
}