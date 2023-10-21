#include <iostream>
using namespace std;

void showStatic(); // Nguyên mẫu hàm

int main()
{
    // Gọi hàm showStatic năm lần.
    for (int count = 0; count < 5; count++)
        showStatic();
    return 0;
}

//*************************************************************
// Định nghĩa hàm showStatic. *
// statNum là một biến cục bộ tĩnh. Giá trị của nó được hiển thị *
// và sau đó được tăng thêm một đơn vị ngay trước khi hàm trả về. *
//*************************************************************
void showStatic()
{
    static int statNum = 5;

    cout << "statNum is " << statNum << endl;
    statNum++;
}