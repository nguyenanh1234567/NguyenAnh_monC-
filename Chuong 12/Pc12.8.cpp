#include <iostream>
#include <fstream>

using namespace std;

void arrayToFile(const char* fileName, const int* arr, int size) {
    ofstream file(fileName, ios::out | ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(arr), size * sizeof(int));
        file.close();
    }
}

void fileToArray(const char* fileName, int* arr, int size) {
    ifstream file(fileName, ios::in | ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(arr), size * sizeof(int));
        file.close();
    }
}

int main() {
    const char* fileName = "data.dat";
    const int arrSize = 10;
    int data[arrSize] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    arrayToFile(fileName, data, arrSize);

    int loadedData[arrSize];
    fileToArray(fileName, loadedData, arrSize);

    for (int i = 0; i < arrSize; i++) {
        cout << loadedData[i] << " ";
    }
    cout << endl;

    return 0;
}