#include <iostream>
using namespace std;

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
    Rectangle box;
    double rectWidth;
    double rectLength;

    cout << "Chương trình này tính diện tích của hình chữ nhật. Nhập chiều rộng: ";
    cin >> rectWidth;
    cout << "Nhập chiều dài: ";
    cin >> rectLength;

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    cout << "Dưới đây là dữ liệu về hình chữ nhật:\n";
    cout << "Chiều rộng: " << box.getWidth() << endl;
    cout << "Chiều dài: " << box.getLength() << endl;
    cout << "Diện tích: " << box.getArea() << endl;

    return 0;
}