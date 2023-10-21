#include <iostream>
#include <iomanip>

// Function prototypes
void inputTestScores(int* scores, int numScores);
void sortTestScores(int* scores, int numScores);
double calculateAverage(int* scores, int numScores);
void displayTestScores(int* scores, int numScores);

int main() {
    int numScores;

    // Get the number of test scores from the user
    std::cout << "Enter the number of test scores: ";
    std::cin >> numScores;

    // Check for valid input
    if (numScores <= 0) {
        std::cerr << "Invalid number of test scores. Please provide a positive number." << std::endl;
        return 1;
    }

    // Dynamically allocate an array for test scores
    int* testScores = new int[numScores];

    // Input test scores
    inputTestScores(testScores, numScores);

    // Sort the test scores in ascending order
    sortTestScores(testScores, numScores);

    // Drop the lowest test score
    numScores--; // Decrease the number of scores by 1
    int* scoresWithoutLowest = testScores + 1;

    // Calculate the average score
    double average = calculateAverage(scoresWithoutLowest, numScores);

    // Display the sorted test scores without the lowest score and average
    displayTestScores(scoresWithoutLowest, numScores);
    std::cout << "Average score (excluding the lowest score): " << std::fixed << std::setprecision(2) << average << std::endl;

    // Deallocate the dynamically allocated array
    delete[] testScores;

    return 0;
}

void inputTestScores(int* scores, int numScores) {
    for (int i = 0; i < numScores; i++) {
        do {
            std::cout << "Enter test score #" << (i + 1) << ": ";
            std::cin >> scores[i];
            if (scores[i] < 0) {
                std::cerr << "Negative scores are not allowed. Please enter a non-negative score." << std::endl;
            }
        } while (scores[i] < 0);
    }
}

void sortTestScores(int* scores, int numScores) {
    for (int i = 0; i < numScores - 1; i++) {
        for (int j = 0; j < numScores - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                // Swap the scores
                int temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
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

void displayTestScores(int* scores, int numScores) {
    std::cout << "Sorted Test Scores (excluding the lowest score): ";
    for (int i = 0; i < numScores; i++) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;
}