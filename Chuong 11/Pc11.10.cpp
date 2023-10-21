#include <iostream>
#include <string>
using namespace std;

struct Speaker {
    string name;
    string phoneNumber;
    string speakingTopic;
    double feeRequired;
};

void searchSpeakerByTopic(const Speaker speakers[], int count, const string& topic) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (speakers[i].speakingTopic.find(topic) != string::npos) {
            cout << "Speaker " << (i + 1) << ":\n";
            cout << "Name: " << speakers[i].name << endl;
            cout << "Telephone Number: " << speakers[i].phoneNumber << endl;
            cout << "Speaking Topic: " << speakers[i].speakingTopic << endl;
            cout << "Fee Required: " << speakers[i].feeRequired << endl;
            cout << "---------------------\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No speakers found on the topic: " << topic << endl;
    }
}

int main() {
    int speakerCount = 3; // Số lượng diễn giả
    Speaker speakers[3]; // Mảng chứa thông tin các diễn giả

    // Điền thông tin của diễn giả vào mảng speakers ở đây

    std::string searchTopic = "Technology"; // Chủ đề cần tìm kiếm

    searchSpeakerByTopic(speakers, speakerCount, searchTopic);

    return 0;
}