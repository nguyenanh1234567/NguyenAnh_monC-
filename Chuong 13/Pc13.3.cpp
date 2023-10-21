#include <iostream>
#include <string>

class Car {
private:
    int yearModel;
    std::string make;
    int speed;

public:
    // Constructor that accepts year model and make
    Car(int model, const std::string& carMake) : yearModel(model), make(carMake), speed(0) {}

    // Accessor functions to get values
    int getYearModel() const {
        return yearModel;
    }

    std::string getMake() const {
        return make;
    }

    int getSpeed() const {
        return speed;
    }

    // Accelerate function (add 5 to speed)
    void accelerate() {
        speed += 5;
    }

    // Brake function (subtract 5 from speed)
    void brake() {
        if (speed >= 5) {
            speed -= 5;
        } else {
            speed = 0;
        }
    }
};

int main() {
    Car myCar(2023, "Toyota");

    std::cout << "Initial car details:" << std::endl;
    std::cout << "Year Model: " << myCar.getYearModel() << std::endl;
    std::cout << "Make: " << myCar.getMake() << std::endl;
    std::cout << "Speed: " << myCar.getSpeed() << std::endl;
    std::cout << std::endl;

    // Accelerate the car five times
    for (int i = 1; i <= 5; i++) {
        myCar.accelerate();
        std::cout << "After accelerating " << i << " time(s), current speed: " << myCar.getSpeed() << " mph" << std::endl;
    }

    std::cout << std::endl;

    // Brake the car five times
    for (int i = 1; i <= 5; i++) {
        myCar.brake();
        std::cout << "After braking " << i << " time(s), current speed: " << myCar.getSpeed() << " mph" << std::endl;
    }

    return 0;
}