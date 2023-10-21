#include <iostream>
#include <vector>
using namespace std;

// Function prototype
double avgVector(vector<int>);

int main()
{
    vector<int> values; // A vector to hold values
    int numValues; // The number of values
    double average; // To hold the average

    // Get the number of values to average.
    cout << "How many values do you wish to average? ";
    cin >> numValues;

    // Get the values and store them in the vector.
    for (int count = 0; count < numValues; count++)
    {
        int tempValue;
        cout << "Enter a value: ";
        cin >> tempValue;
        values.push_back(tempValue);
    }

    // Get the average of the values and display it.
    average = avgVector(values);
    cout << "Average: " << average << endl;

    return 0;
}

// Definition of function avgVector.
double avgVector(vector<int> vect)
{
    int total = 0; // accumulator
    double avg; // average

    if (vect.empty()) // Determine if the vector is empty
    {
        cout << "No values to average." << endl;
        avg = 0.0;
    }
    else
    {
        for (int count = 0; count < vect.size(); count++)
            total += vect[count];
        avg = static_cast<double>(total) / vect.size();
    }
    return avg;
}