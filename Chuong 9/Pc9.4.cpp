#include <iostream>
#include <iomanip>
#include <string>

// Function prototypes
void inputNameAndScores(std::string* names, int* scores, int numScores);
void sortNameAndScores(std::string* names, int* scores, int numScores);
double calculateAverage(int* scores, int numScores);
void displayNameAndScores(std::string* names, int* scores, int numScores);

int main() {
    int numScores;

    // Get the number of test scores from the user
    std::cout << "Enter the number of students: ";
    std::cin >> numScores;

    // Check for valid input
    if (numScores <= 0) {
        std::cerr << "Invalid number of students. Please provide a positive number." << std::endl;
        return 1;
    }

    // Dynamically allocate arrays for student names and test scores
    std::string* studentNames = new std::string[numScores];
    int* testScores = new int[numScores];

    // Input student names and test scores
    inputNameAndScores(studentNames, testScores, numScores);

    // Sort the student names and test scores in ascending order
    sortNameAndScores(studentNames, testScores, numScores);

    // Calculate the average score
    double average = calculateAverage(testScores, numScores);

    // Display the sorted student names and test scores
    displayNameAndScores(studentNames, testScores, numScores);
    std::cout << "Average score: " << std::fixed << std::setprecision(2) << average << std::endl;

    // Deallocate the dynamically allocated arrays
    delete[] studentNames;
    delete[] testScores;

    return 0;
}

void inputNameAndScores(std::string* names, int* scores, int numScores) {
    for (int i = 0; i < numScores; i++) {
        do {
            std::cout << "Enter student name #" << (i + 1) << ": ";
            std::cin.ignore(); // Clear the newline character
            std::getline(std::cin, names[i]);
            std::cout << "Enter test score for " << names[i] << ": ";
            std::cin >> scores[i];
            if (scores[i] < 0) {
                std::cerr << "Negative scores are not allowed. Please enter a non-negative score." << std::endl;
            }
        } while (scores[i] < 0);
    }
}

void sortNameAndScores(std::string* names, int* scores, int numScores) {
    for (int i = 0; i < numScores - 1; i++) {
        for (int j = 0; j < numScores - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                // Swap the scores
                int tempScore = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = tempScore;

                // Swap the names
                std::string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }
}

double calculateAverage(int* scores, int numScores) {
    double sum = 0;
    for (int i = 0; i < numScores; i++) {
        sum += scores[i];
    }
    return (numScores > 0) ? (sum / numScores) : 0.0;
}

void displayNameAndScores(std::string* names, int* scores, int numScores) {
    std::cout << "Sorted Student Names and Test Scores: " << std::endl;
    for (int i = 0; i < numScores; i++) {
        std::cout << names[i] << ": " << scores[i] << std::endl;
    }
}