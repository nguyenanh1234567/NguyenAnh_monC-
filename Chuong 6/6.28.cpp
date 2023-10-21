#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getChoice(char &);
double calcWeeklyPay(int, double);
double calcWeeklyPay(double);

int main()
{
    char selection; // Lựa chọn menu
    int worked;     // Số giờ làm việc
    double rate;    // Tỉ lệ lương theo giờ
    double yearly;  // Lương hàng năm

    // Đặt định dạng xuất số học.
    cout << fixed << showpoint << setprecision(2);

    // Hiển thị menu và lấy lựa chọn.
    cout << "Bạn muốn tính lương hàng tuần cho\n";
    cout << "(H) một nhân viên được trả lương theo giờ, hoặc \n";
    cout << "(S) một nhân viên được trả lương hàng năm?\n";
    getChoice(selection);

    // Xử lý lựa chọn trong menu.
    switch (selection)
    {
    // Nhân viên được trả lương theo giờ
    case 'H':
    case 'h':
        cout << "Có bao nhiêu giờ làm việc? ";
        cin >> worked;
        cout << "Tỉ lệ lương theo giờ là bao nhiêu? ";
        cin >> rate;
        cout << "Lương hàng tuần là $";
        cout << calcWeeklyPay(worked, rate) << endl;
        break;

    // Nhân viên được trả lương hàng năm
    case 'S':
    case 's':
        cout << "Lương hàng năm là bao nhiêu? ";
        cin >> yearly;
        cout << "Lương hàng tuần là $";
        cout << calcWeeklyPay(yearly) << endl;
        break;
    }
    return 0;
}

//*************************************************************
// Định nghĩa hàm getChoice.
// Tham số letter là một tham chiếu đến kiểu char.
// Hàm này yêu cầu người dùng nhập 'H' hoặc 'S' và trả lại đầu vào đã được kiểm tra.
//*************************************************************
void getChoice(char &letter)
{
    // Lấy lựa chọn của người dùng.
    cout << "Nhập lựa chọn của bạn (H hoặc S): ";
    cin >> letter;

    // Xác minh lựa chọn.
    while (letter != 'H' && letter != 'h' &&
           letter != 'S' && letter != 's')
    {
        cout << "Vui lòng nhập H hoặc S: ";
        cin >> letter;
    }
}

//***********************************************************
// Định nghĩa hàm nạp chồng calcWeeklyPay.
// Hàm này tính lương hàng tuần của một nhân viên được trả lương theo giờ.
// Tham số hours chứa số giờ làm việc. Tham số payRate chứa tỷ lệ lương theo giờ.
// Hàm trả lại lương hàng tuần.
//***********************************************************

double calcWeeklyPay(int hours, double payRate)
{
    return hours * payRate;
}

//***********************************************************
// Định nghĩa hàm nạp chồng calcWeeklyPay.
// Hàm này tính lương hàng tuần của một nhân viên được trả lương hàng năm.
// Tham số annSalary chứa lương hàng năm của nhân viên.
// Hàm trả lại lương hàng tuần.
//***********************************************************

double calcWeeklyPay(double annSalary)
{
    return annSalary / 52;
}