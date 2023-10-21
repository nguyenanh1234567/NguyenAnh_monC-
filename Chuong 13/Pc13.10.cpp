#include <iostream>
#include <iomanip>

class NumberArray {
private:
    double* numbers;
    int size;

public:
    NumberArray(int arraySize) : size(arraySize) {
        numbers = new double[size];
        for (int i = 0; i < size; i++) {
            numbers[i] = 0.0;
        }
    }

    ~NumberArray() {
        delete[] numbers;
    }

    void storeNumber(int index, double value) {
        if (index >= 0 && index < size) {
            numbers[index] = value;
        }
    }

    double retrieveNumber(int index) const {
        if (index >= 0 && index < size) {
            return numbers[index];
        }
        return 0.0;  // Return 0 if the index is out of bounds
    }

    double findHighestValue() const {
        double highest = numbers[0];
        for (int i = 1; i < size; i++) {
            if (numbers[i] > highest) {
                highest = numbers[i];
            }
        }
        return highest;
    }

    double findLowestValue() const {
        double lowest = numbers[0];
        for (int i = 1; i < size; i++) {
            if (numbers[i] < lowest) {
                lowest = numbers[i];
            }
        }
        return lowest;
    }

    double calculateAverage() const {
        double total = 0.0;
        for (int i = 0; i < size; i++) {
            total += numbers[i];
        }
        return total / size;
    }
};

int main() {
    int arraySize;
    std::cout << "Enter the size of the array: ";
    std::cin >> arraySize;

    NumberArray myArray(arraySize);

    for (int i = 0; i < arraySize; i++) {
        double value;
        std::cout << "Enter a value for element " << i << ": ";
        std::cin >> value;
        myArray.storeNumber(i, value);
    }

    std::cout << "Highest value: " << myArray.findHighestValue() << std::endl;
    std::cout << "Lowest value: " << myArray.findLowestValue() << std::endl;
    std::cout << "Average value: " << myArray.calculateAverage() << std::endl;

    return 0;
}