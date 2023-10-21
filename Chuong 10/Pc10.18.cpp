#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Contact {
    string name;
    string phoneNumber;
};

int main() {
    vector<Contact> contacts = {
        {"Alejandra Cruz", "555-1223"},
        {"Joe Looney", "555-0097"},
        {"Geri Palmer", "555-8787"},
        {"Li Chen", "555-1212"},
        {"Holly Gaddis", "555-8878"},
        {"Sam Wiggins", "555-0998"},
        {"Bob Kain", "555-8712"},
        {"Tim Haynes", "555-7676"},
        {"Warren Gaddis", "555-9037"},
        {"Jean James", "555-4939"},
        {"Ron Palmer", "555-2783"}
    };

    string searchName;
    cout << "Enter a name or partial name to search for: ";
    getline(cin, searchName);

    for (const Contact& contact : contacts) {
        if (contact.name.find(searchName) != string::npos) {
            cout << contact.name << ", " << contact.phoneNumber << endl;
        }
    }

    return 0;
}