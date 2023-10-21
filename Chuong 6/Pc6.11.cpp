#include <iostream>
using namespace std;

// Function prototypes
void getScore(int &score);
void calcAverage(int scores[]);
int findLowest(int scores[]);

int main() {
    int scores[5];

    cout << "Enter five test scores:\n";
    for (int i = 0; i < 5; i++) {
        getScore(scores[i]);
    }

    calcAverage(scores);

    return 0;
}

// Function to get and validate a test score
void getScore(int &score) {
    do {
        cout << "Enter a test score (0-100): ";
        cin >> score;
    } while (score < 0 || score > 100);
}

// Function to find and return the lowest score
int findLowest(int scores[]) {
    int lowest = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// Function to calculate and display the average of the four highest scores
void calcAverage(int scores[]) {
    int lowest = findLowest(scores);
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        if (scores[i] != lowest) {
            sum += scores[i];
        }
    }

    double average = static_cast<double>(sum) / 4;

    cout << "The average of the four highest scores is: " << average << endl;
}