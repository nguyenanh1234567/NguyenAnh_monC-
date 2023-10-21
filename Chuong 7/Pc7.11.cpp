#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    // Read correct answers from the file
    ifstream correctAnswersFile("CorrectAnswers.txt");
    if (!correctAnswersFile) {
        cerr << "Error opening CorrectAnswers.txt. Make sure the file exists in the current directory." << endl;
        return 1;
    }

    vector<char> correctAnswers;
    char answer;
    while (correctAnswersFile >> answer) {
        correctAnswers.push_back(answer);
    }
    correctAnswersFile.close();

    // Read student's answers from the file
    ifstream studentAnswersFile("StudentAnswers.txt");
    if (!studentAnswersFile) {
        cerr << "Error opening StudentAnswers.txt. Make sure the file exists in the current directory." << endl;
        return 1;
    }

    vector<char> studentAnswers;
    while (studentAnswersFile >> answer) {
        studentAnswers.push_back(answer);
    }
    studentAnswersFile.close();

    // Check student's answers against correct answers
    int totalQuestions = correctAnswers.size();
    int missedQuestions = 0;
    vector<int> missedQuestionNumbers;

    for (int i = 0; i < totalQuestions; i++) {
        if (studentAnswers[i] != correctAnswers[i]) {
            missedQuestions++;
            missedQuestionNumbers.push_back(i + 1);
        }
    }

    // Calculate percentage of correct answers
    int correctQuestions = totalQuestions - missedQuestions;
    double percentage = (static_cast<double>(correctQuestions) / totalQuestions) * 100;

    // Display results
    cout << "Missed questions: " << missedQuestions << endl;
    cout << "Missed question numbers: ";
    for (int i = 0; i < missedQuestions; i++) {
        cout << missedQuestionNumbers[i];
        if (i < missedQuestions - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    cout << "Percentage of correct answers: " << percentage << "%" << endl;

    if (percentage >= 70.0) {
        cout << "Student passed the exam." << endl;
    } else {
        cout << "Student failed the exam." << endl;
    }

    return 0;
}