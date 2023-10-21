#include <iostream>
using namespace std;

int main() {
    const char correctAnswers[] = {
        'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D',
        'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'
    };
    char studentAnswers[20];
    
    cout << "Enter the student's answers for each question (A, B, C, or D):\n";
    
    for (int i = 0; i < 20; i++) {
        do {
            cout << "Question " << i + 1 << ": ";
            cin >> studentAnswers[i];
        } while (studentAnswers[i] != 'A' && studentAnswers[i] != 'B' && studentAnswers[i] != 'C' && studentAnswers[i] != 'D');
    }
    
    int correctCount = 0;
    int incorrectCount = 0;
    int incorrectQuestions[20];
    
    for (int i = 0; i < 20; i++) {
        if (studentAnswers[i] == correctAnswers[i]) {
            correctCount++;
        } else {
            incorrectQuestions[incorrectCount] = i + 1;
            incorrectCount++;
        }
    }
    
    cout << "\nResults:\n";
    cout << "Total Correct Answers: " << correctCount << endl;
    cout << "Total Incorrect Answers: " << incorrectCount << endl;
    
    if (correctCount >= 15) {
        cout << "The student has passed the exam.\n";
    } else {
        cout << "The student has failed the exam.\n";
        cout << "Incorrectly answered questions:\n";
        for (int i = 0; i < incorrectCount; i++) {
            cout << "Question " << incorrectQuestions[i] << endl;
        }
    }
    
    return 0;
}