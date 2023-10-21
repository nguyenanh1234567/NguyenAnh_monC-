#include <iostream>
using namespace std;

// Nguyên mẫu hàm với đối số mặc định
void displayStars(int cols = 10, int rows = 1);

int main()
{
    displayStars(); // Sử dụng giá trị mặc định cho cols và rows.
    cout << endl;
    displayStars(5); // Sử dụng giá trị mặc định cho rows.
    cout << endl;
    displayStars(7, 3); // Sử dụng 7 cho cols và 3 cho rows.
    return 0;
}

//*********************************************************
// Định nghĩa hàm displayStars. *
// Đối số mặc định cho cols là 10 và cho rows là 1.*
// Hàm này hiển thị một hình vuông được tạo bởi các dấu sao. *
//*********************************************************
void displayStars(int cols, int rows)
{
    // Vòng lặp lồng nhau. Vòng lặp ngoại điều khiển hàng
    // và vòng lặp trong điều khiển cột.
    for (int down = 0; down < rows; down++)
    {
        for (int across = 0; across < cols; across++)
            cout << "*";
        cout << endl;
    }
}