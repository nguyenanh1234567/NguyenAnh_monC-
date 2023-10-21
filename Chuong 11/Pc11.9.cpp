#include <iostream>
#include <string>
using namespace std;

struct Speaker {
    string name;
    string phoneNumber;
    string speakingTopic;
    double feeRequired;
};

int main() {
    const int MAX_SPEAKERS = 10;
    Speaker speakers[MAX_SPEAKERS];
    int speakerCount = 0;

    while (true) {
        cout << "Speakers' Bureau Menu:\n";
        cout << "1. Add New Speaker\n";
        cout << "2. Update Speaker Data\n";
        cout << "3. Display All Speakers\n";
        cout << "4. Exit\n";
        int choice;
        cin >> choice;

        if (choice == 1 && speakerCount < MAX_SPEAKERS) {
            Speaker newSpeaker;
            cout << "Enter Speaker Name: ";
            cin.ignore();
            getline(cin, newSpeaker.name);
            cout << "Enter Telephone Number: ";
            getline(cin, newSpeaker.phoneNumber);
            cout << "Enter Speaking Topic: ";
            getline(cin, newSpeaker.speakingTopic);
            cout << "Enter Fee Required: ";
            cin >> newSpeaker.feeRequired;

            speakers[speakerCount] = newSpeaker;
            speakerCount++;
        } else if (choice == 2) {
            // Add code to update speaker data
        } else if (choice == 3) {
            cout << "Speakers' Bureau:\n";
            for (int i = 0; i < speakerCount; i++) {
                cout << "Speaker " << (i + 1) << ":\n";
                cout << "Name: " << speakers[i].name << endl;
                cout << "Telephone Number: " << speakers[i].phoneNumber << endl;
                cout << "Speaking Topic: " << speakers[i].speakingTopic << endl;
                cout << "Fee Required: " << speakers[i].feeRequired << endl;
                cout << "---------------------\n";
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}