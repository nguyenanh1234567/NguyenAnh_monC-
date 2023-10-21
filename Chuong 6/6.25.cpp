#include <iostream>
using namespace std;

// Nguyên mẫu hàm. Tham số là một biến tham chiếu.
void doubleNum(int &);

int main()
{
    int value = 4;

    cout << "In main, value is " << value << endl;
    cout << "Now calling doubleNum..." << endl;
    doubleNum(value); // Gọi hàm doubleNum với tham số là value
    cout << "Now back in main. value is " << value << endl;
    return 0;
}

//**********************************************************
// Định nghĩa hàm doubleNum. *
// Tham số refVar là một biến tham chiếu. Giá trị trong *
// refVar được nhân đôi. *
//**********************************************************

void doubleNum(int &refVar)
{
    refVar *= 2; // Nhân giá trị trong refVar với 2
}