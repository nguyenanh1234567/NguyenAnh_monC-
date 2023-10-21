#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, city, college, profession, animal, petName;
    int age;

    // Gather user input
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Consume the newline character
    cout << "Enter the name of a city: ";
    getline(cin, city);
    cout << "Enter the name of a college: ";
    getline(cin, college);
    cout << "Enter a profession: ";
    getline(cin, profession);
    cout << "Enter a type of animal: ";
    getline(cin, animal);
    cout << "Enter a pet's name: ";
    getline(cin, petName);

    // Display the story
    cout << "There once was a person named " << name << " who lived in " << city << ".\n";
    cout << "At the age of " << age << ", " << name << " went to college at " << college << ".\n";
    cout << name << " graduated and went to work as a " << profession << ".\n";
    cout << "Then, " << name << " adopted a(n) " << animal << " named " << petName << ".\n";
    cout << "They both lived happily ever after!" << endl;

    return 0;
}