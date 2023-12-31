#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
    const int SIZE = 20;
    char input[SIZE];
    int total = 0;
    int count = 0;
    double average;

    cout << "This program will average a series of numbers.\n";
    cout << "Enter the first number or Q to quit: ";
    cin.getline(input, SIZE);

    while (tolower(input[0]) != 'q')
    {
        total += atoi(input);
        count++;
        cout << "Enter the next number or Q to quit: ";
        cin.getline(input, SIZE);
    }

    if (count != 0)
    {
        average = static_cast<double>(total) / count;
        cout << "Average: " << average << endl;
    }

    return 0;
}