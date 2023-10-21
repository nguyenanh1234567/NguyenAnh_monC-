#include <iostream>
using namespace std;

// Khai báo nguyên mẫu hàm
void showLocal();

int main()
{
    showLocal();
    showLocal();
    return 0;
}

//****************************************************
// Định nghĩa hàm showLocal. *
// Giá trị ban đầu của localNum, là 5, được hiển thị. *
// Giá trị của localNum sau đó được thay đổi thành 99 trước khi *
// hàm kết thúc. *
//****************************************************

void showLocal()
{
    int localNum = 5; // Biến cục bộ

    cout << "localNum is " << localNum << endl;
    localNum = 99;
}