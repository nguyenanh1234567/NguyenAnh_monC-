#include <iostream>
#include <string>

class PersonalInformation {
private:
    std::string name;
    std::string address;
    int age;
    std::string phoneNumber;

public:
    // Constructor
    PersonalInformation(const std::string& n, const std::string& a, int ag, const std::string& phone)
        : name(n), address(a), age(ag), phoneNumber(phone) {}

    // Accessor functions
    std::string getName() const {
        return name;
    }

    std::string getAddress() const {
        return address;
    }

    int getAge() const {
        return age;
    }

    std::string getPhoneNumber() const {
        return phoneNumber;
    }

    // Mutator functions
    void setName(const std::string& n) {
        name = n;
    }

    void setAddress(const std::string& a) {
        address = a;
    }

    void setAge(int ag) {
        age = ag;
    }

    void setPhoneNumber(const std::string& phone) {
        phoneNumber = phone;
    }
};

int main() {
    // Create instances for your information and two friends' or family members' information
    PersonalInformation myInfo("Your Name", "Your Address", 25, "Your Phone Number");
    PersonalInformation friend1("Friend 1 Name", "Friend 1 Address", 30, "Friend 1 Phone Number");
    PersonalInformation friend2("Friend 2 Name", "Friend 2 Address", 28, "Friend 2 Phone Number");

    // Display personal information
    std::cout << "Your Information:" << std::endl;
    std::cout << "Name: " << myInfo.getName() << std::endl;
    std::cout << "Address: " << myInfo.getAddress() << std::endl;
    std::cout << "Age: " << myInfo.getAge() << std::endl;
    std::cout << "Phone Number: " << myInfo.getPhoneNumber() << std::endl;

    std::cout << std::endl;

    std::cout << "Friend 1's Information:" << std::endl;
    std::cout << "Name: " << friend1.getName() << std::endl;
    std::cout << "Address: " << friend1.getAddress() << std::endl;
    std::cout << "Age: " << friend1.getAge() << std::endl;
    std::cout << "Phone Number: " << friend1.getPhoneNumber() << std::endl;

    std::cout << std::endl;

    std::cout << "Friend 2's Information:" << std::endl;
    std::cout << "Name: " << friend2.getName() << std::endl;
    std::cout << "Address: " << friend2.getAddress() << std::endl;
    std::cout << "Age: " << friend2.getAge() << std::endl;
    std::cout << "Phone Number: " << friend2.getPhoneNumber() << std::endl;

    return 0;
}