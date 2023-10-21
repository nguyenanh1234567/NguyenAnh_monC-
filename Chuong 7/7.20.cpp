#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4; // Array size
    double testScores[SIZE]; // Array of test scores
    double total; // Total of the scores
    double lowestScore; // Lowest test score
    double average; // Average test score

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(1);

    // Get the test scores from the user.
    getTestScores(testScores, SIZE);

    // Get the total of the test scores.
    total = getTotal(testScores, SIZE);

    // Get the lowest test score.
    lowestScore = getLowest(testScores, SIZE);

    // Subtract the lowest score from the total.
    total -= lowestScore;

    // Calculate the average. Divide by 3 because
    // the lowest test score was dropped.
    average = total / (SIZE - 1);

    // Display the average.
    cout << "The average with the lowest score dropped is " << average << ".\n";

    return 0;
}

// Definition of function getTestScores.
// This function accepts an array and the size of the array
// as its arguments. It prompts the user to enter test scores,
// which are stored in the array.

void getTestScores(double scores[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter test score #" << (i + 1) << ": ";
        cin >> scores[i];
    }
}

// Definition of function getTotal.
// This function accepts an array and the size of the array
// as its arguments. It returns the total of the values
// in the array.

double getTotal(const double scores[], int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total += scores[i];
    }
    return total;
}

// Definition of function getLowest.
// This function accepts an array and the size of the array
// as its arguments. It returns the lowest value in the array.

double getLowest(const double scores[], int size)
{
    double lowest = scores[0];
    for (int i = 1; i < size; i++)
    {
        if (scores[i] < lowest)
        {
            lowest = scores[i];
        }
    }
    return lowest;
}