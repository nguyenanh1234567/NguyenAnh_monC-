#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6; // Number of employees
    int hours[NUM_EMPLOYEES];    // Each employee's hours

    // Input the hours worked for each employee.
    for (int count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << "Enter the hours worked by employee " << (count + 1) << ": ";
        cin >> hours[count];
    }

    // Display the contents of the array.
    cout << "The hours you entered are:";
    for (int count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << " " << hours[count];
    }
    cout << endl;

    return 0;
}