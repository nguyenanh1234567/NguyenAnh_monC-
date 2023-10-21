#include <iostream>
using namespace std;

// Rectangle class declaration.
class Rectangle {
private:
    double width;
    double length;

public:
    void setWidth(double w) {
        width = w;
    }

    void setLength(double len) {
        length = len;
    }

    double getWidth() const {
        return width;
    }

    double getLength() const {
        return length;
    }

    double getArea() const {
        return width * length;
    }
};

int main() {
    double number;  // Để lưu trữ số đo
    double totalArea;  // Tổng diện tích
    Rectangle *kitchen = nullptr;  // Con trỏ đến kích thước phòng bếp
    Rectangle *bedroom = nullptr;  // Con trỏ đến kích thước phòng ngủ
    Rectangle *den = nullptr;  // Con trỏ đến kích thước phòng khách

    // Cấp phát động các đối tượng.
    kitchen = new Rectangle;
    bedroom = new Rectangle;
    den = new Rectangle;

    // Nhập kích thước của phòng bếp.
    cout << "Chiều dài của phòng bếp là gì? ";
    cin >> number;  // Nhập chiều dài
    kitchen->setLength(number);  // Lưu trữ trong đối tượng kitchen
    cout << "Chiều rộng của phòng bếp là gì? ";
    cin >> number;  // Nhập chiều rộng
    kitchen->setWidth(number);  // Lưu trữ trong đối tượng kitchen

    // Nhập kích thước của phòng ngủ.
    cout << "Chiều dài của phòng ngủ là gì? ";
    cin >> number;  // Nhập chiều dài
    bedroom->setLength(number);  // Lưu trữ trong đối tượng bedroom
    cout << "Chiều rộng của phòng ngủ là gì? ";
    cin >> number;  // Nhập chiều rộng
    bedroom->setWidth(number);  // Lưu trữ trong đối tượng bedroom

    // Nhập kích thước của phòng khách.
    cout << "Chiều dài của phòng khách là gì? ";
    cin >> number;  // Nhập chiều dài
    den->setLength(number);  // Lưu trữ trong đối tượng den
    cout << "Chiều rộng của phòng khách là gì? ";
    cin >> number;  // Nhập chiều rộng
    den->setWidth(number);  // Lưu trữ trong đối tượng den

    // Tính tổng diện tích của ba phòng.
    totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

    // Hiển thị tổng diện tích của ba phòng.
    cout << "Tổng diện tích của ba phòng là " << totalArea << endl;

    // Xóa các đối tượng khỏi bộ nhớ.
    delete kitchen;
    delete bedroom;
    delete den;
    kitchen = nullptr;  // Đặt kitchen là con trỏ null.
    bedroom = nullptr;  // Đặt bedroom là con trỏ null.
    den = nullptr;  // Đặt den là con trỏ null.

    return 0;
}