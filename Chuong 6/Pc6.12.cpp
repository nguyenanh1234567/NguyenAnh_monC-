#include <iostream>
using namespace std;

// Function prototypes
void getJudgeData(double &score);
void calcScore(double scores[]);
double findLowest(double scores[]);
double findHighest(double scores[]);

int main() {
    double scores[5];

    for (int i = 0; i < 5; i++) {
        getJudgeData(scores[i]);
    }

    calcScore(scores);

    return 0;
}

// Function to get and validate a judge's score
void getJudgeData(double &score) {
    do {
        cout << "Enter a judge's score (0-10): ";
        cin >> score;
    } while (score < 0 || score > 10);
}

// Function to find and return the lowest score
double findLowest(double scores[]) {
    double lowest = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// Function to find and return the highest score
double findHighest(double scores[]) {
    double highest = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

// Function to calculate and display the average of three scores
void calcScore(double scores[]) {
    double lowest = findLowest(scores);
    double highest = findHighest(scores);

    double sum = 0;
    for (int i = 0; i < 5; i++) {
        if (scores[i] != lowest && scores[i] != highest) {
            sum += scores[i];
        }
    }

    double average = sum / 3;

    cout << "The contestant's final score is: " << average << endl;
}