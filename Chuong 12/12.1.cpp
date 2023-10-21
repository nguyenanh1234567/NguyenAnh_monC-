#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream dataFile;

    cout << "Mở tệp...\n";
    dataFile.open("demofile.txt", ios::out); // Mở tệp để ghi
    cout << "Bắt đầu viết dữ liệu vào tệp.\n";
    dataFile << "Jones\n"; // Viết dòng 1
    dataFile << "Smith\n"; // Viết dòng 2
    dataFile << "Willis\n"; // Viết dòng 3
    dataFile << "Davis\n"; // Viết dòng 4
    dataFile.close(); // Đóng tệp
    cout << "Hoàn thành.\n";
    return 0;
}