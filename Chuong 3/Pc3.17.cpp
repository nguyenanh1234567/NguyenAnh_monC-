#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned>(time(nullptr)));

    int num1, num2, answer, userAnswer;

    // Generate two random numbers for addition
    num1 = rand() % 1000; // You can adjust the range as needed
    num2 = rand() % 1000;

    // Display the addition problem
    cout << num1 << " + " << num2 << " = ?" << endl;
    cout << "Press Enter to reveal the answer...";

    // Wait for the user to press Enter
    cin.get();

    // Calculate the correct answer
    answer = num1 + num2;

    // Display the correct answer
    cout << num1 << " + " << num2 << " = " << answer << endl;

    return 0;
}