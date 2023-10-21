#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5; // Size of the array
    int numbers[SIZE];  // Array of integers
    int count;          // Counter variable

    // Get values to store in the array using pointer notation instead of subscripts.
    cout << "Enter " << SIZE << " numbers: ";
    for (count = 0; count < SIZE; count++)
        cin >> *(numbers + count); // Read values into the array using pointer notation

    // Display the values in the array using pointer notation.
    cout << "Here are the numbers you entered:\n";
    for (count = 0; count < SIZE; count++)
        cout << *(numbers + count) << " "; // Display values using pointer notation
    cout << endl;

    return 0;
}