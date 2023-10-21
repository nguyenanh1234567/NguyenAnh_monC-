#include <iostream>
#include <string>
using namespace std;

string replaceSubstring(const string &str1, const string &str2, const string &str3) {
    string result = str1;
    size_t pos = result.find(str2);
    while (pos != string::npos) {
        result.replace(pos, str2.length(), str3);
        pos = result.find(str2, pos + str3.length());
    }
    return result;
}

int main() {
    string string1 = "the dog jumped over the fence";
    string string2 = "the";
    string string3 = "that";

    string replaced = replaceSubstring(string1, string2, string3);
    cout << replaced << endl;

    return 0;
}