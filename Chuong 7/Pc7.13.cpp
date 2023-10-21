#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    vector<double> testScores[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> studentNames[i];

        double totalScore = 0;
        for (int j = 0; j < numTests; j++) {
            double score;
            do {
                cout << "Enter test score " << j + 1 << " for " << studentNames[i] << ": ";
                cin >> score;
            } while (score < 0 || score > 100);
            testScores[i].push_back(score);
        }

        // Sort the test scores and drop the lowest score
        sort(testScores[i].begin(), testScores[i].end());
        testScores[i].pop_back();

        for (int j = 0; j < numTests - 1; j++) {
            totalScore += testScores[i][j];
        }

        double average = totalScore / (numTests - 1);
        studentGrades[i] = calculateLetterGrade(average);
    }

    cout << "\nStudent Grades and Average Test Scores (with lowest score dropped):\n";
    for (int i = 0; i < numStudents; i++) {
        cout << studentNames[i] << " (Average Score: " << studentGrades[i] << "): ";
        for (int j = 0; j < numTests - 1; j++) {
            cout << testScores[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}