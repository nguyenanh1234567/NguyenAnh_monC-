#include <iostream>

class Circle {
private:
    double radius;
    const double pi = 3.14159;

public:
    // Default constructor
    Circle() : radius(0.0) {}

    // Constructor with radius as an argument
    Circle(double r) : radius(r) {}

    // Mutator function for the radius variable
    void setRadius(double r) {
        radius = r;
    }

    // Accessor function for the radius variable
    double getRadius() const {
        return radius;
    }

    // Calculate and return the area of the circle
    double getArea() const {
        return pi * radius * radius;
    }

    // Calculate and return the diameter of the circle
    double getDiameter() const {
        return radius * 2;
    }

    // Calculate and return the circumference of the circle
    double getCircumference() const {
        return 2 * pi * radius;
    }
};

int main() {
    double userRadius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> userRadius;

    Circle myCircle(userRadius);

    std::cout << "Circle Area: " << myCircle.getArea() << std::endl;
    std::cout << "Circle Diameter: " << myCircle.getDiameter() << std::endl;
    std::cout << "Circle Circumference: " << myCircle.getCircumference() << std::endl;

    return 0;
}