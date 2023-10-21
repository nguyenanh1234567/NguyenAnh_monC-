#include <iostream>
using namespace std;

struct Student {
    string name;
    int idnum;
    int* tests;
    double average;
    char grade;
};

void calculateAverageAndGrade(Student& student) {
    double sum = 0.0;
    for (int i = 0; i < 5; i++) {
        sum += student.tests[i];
    }
    student.average = sum / 5;

    if (student.average >= 91) {
        student.grade = 'A';
    } else if (student.average >= 81) {
        student.grade = 'B';
    } else if (student.average >= 71) {
        student.grade = 'C';
    } else if (student.average >= 61) {
        student.grade = 'D';
    } else {
        student.grade = 'F';
    }
}

int main() {
    int numStudents;
    int numTests = 5;

    cout << "Enter the number of students: ";
    cin >> numStudents;
    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++) {
        students[i].tests = new int[numTests];
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Enter student ID number: ";
        cin >> students[i].idnum;
        cout << "Enter test scores for " << students[i].name << " (5 scores): ";
        for (int j = 0; j < numTests; j++) {
            cin >> students[i].tests[j];
        }
        calculateAverageAndGrade(students[i]);
    }

    cout << "Student Report:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "ID Number: " << students[i].idnum << endl;
        cout << "Average Test Score: " << students[i].average << endl;
        cout << "Course Grade: " << students[i].grade << endl;
        cout << "---------------------\n";
        delete[] students[i].tests;
    }

    delete[] students;

    return 0;
}