#include <iostream>

class TestScores {
private:
    double test1;
    double test2;
    double test3;

public:
    // Constructor
    TestScores() : test1(0), test2(0), test3(0) {}

    // Mutator functions
    void setTest1(double score1) {
        test1 = score1;
    }

    void setTest2(double score2) {
        test2 = score2;
    }

    void setTest3(double score3) {
        test3 = score3;
    }

    // Accessor functions
    double getTest1() const {
        return test1;
    }

    double getTest2() const {
        return test2;
    }

    double getTest3() const {
        return test3;
    }

    // Calculate and return the average of the test scores
    double calculateAverage() const {
        return (test1 + test2 + test3) / 3.0;
    }
};

int main() {
    TestScores scores;

    // Ask the user to enter three test scores
    double score1, score2, score3;
    std::cout << "Enter Test Score 1: ";
    std::cin >> score1;
    scores.setTest1(score1);

    std::cout << "Enter Test Score 2: ";
    std::cin >> score2;
    scores.setTest2(score2);

    std::cout << "Enter Test Score 3: ";
    std::cin >> score3;
    scores.setTest3(score3);

    // Display the average of the test scores
    std::cout << "Average Test Score: " << scores.calculateAverage() << std::endl;

    return 0;
}






