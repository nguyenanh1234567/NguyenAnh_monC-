#include <iostream>
#include <cstdlib> // Cần để sử dụng hàm exit
using namespace std;

// Hàm nguyên mẫu
void function();

int main()
{
    function();
    return 0;
}

//***********************************************************
// Hàm này đơn giản chỉ mô tả cách exit có thể được sử dụng *
// để kết thúc chương trình từ một hàm khác ngoài main. *
//***********************************************************

void function()
{
    cout << "Chương trình này kết thúc bằng hàm exit.\n";
    cout << "Tạm biệt!\n";
    exit(0);
    cout << "Thông điệp này sẽ không bao giờ được hiển thị\n";
    cout << "vì chương trình đã kết thúc.\n";
}