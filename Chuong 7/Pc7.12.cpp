#include <iostream>
#include <string>
using namespace std;

char calculateLetterGrade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    const int numStudents = 5;
    const int numTests = 4;
    string studentNames[numStudents];
    char studentGrades[numStudents];
    double testScores[numStudents][numTests];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> studentNames[i];

        double totalScore = 0;
        for (int j = 0; j < numTests; j++) {
            do {
                cout << "Enter test score " << j + 1 << " for " << studentNames[i] << ": ";
                cin >> testScores[i][j];
            } while (testScores[i][j] < 0 || testScores[i][j] > 100);
            totalScore += testScores[i][j];
        }

        double average = totalScore / numTests;
        studentGrades[i] = calculateLetterGrade(average);
    }

    cout << "\nStudent Grades and Average Test Scores:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << studentNames[i] << " (Average Score: " << studentGrades[i] << "): ";
        double totalScore = 0;
        for (int j = 0; j < numTests; j++) {
            cout << testScores[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}