#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    ifstream inputFile("text.txt");

    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string line;
    vector<string> sentences;
    int totalWords = 0;
    int totalSentences = 0;

    while (getline(inputFile, line)) {
        sentences.push_back(line);
    }

    inputFile.close();

    for (const string& sentence : sentences) {
        istringstream iss(sentence);
        string word;
        while (iss >> word) {
            totalWords++;
        }
        totalSentences++;
    }

    if (totalSentences > 0) {
        double averageWords = static_cast<double>(totalWords) / totalSentences;
        cout << "Average number of words per sentence: " << averageWords << endl;
    } else {
        cout << "No sentences found in the file." << endl;
    }

    return 0;
}