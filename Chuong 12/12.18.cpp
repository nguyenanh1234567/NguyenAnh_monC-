#include <iostream>
#include <fstream>
using namespace std;

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;

// Declare a structure for the record.
struct Info
{
    char name[NAME_SIZE];
    int age;
    char address1[ADDR_SIZE];
    char address2[ADDR_SIZE];
    char phone[PHONE_SIZE];
};

// Function to calculate the byte number in the file for a given record number.
long byteNum(int recNum)
{
    return sizeof(Info) * recNum;
}

// Function to display the contents of an Info structure.
void showRec(Info record)
{
    cout << "Name: " << record.name << endl;
    cout << "Age: " << record.age << endl;
    cout << "Address line 1: " << record.address1 << endl;
    cout << "Address line 2: " << record.address2 << endl;
    cout << "Phone: " << record.phone << endl;
}

int main()
{
    Info person; // To hold info about a person
    fstream people; // File stream object

    // Open the file for input in binary mode.
    people.open("people.dat", ios::in | ios::binary);

    // Check for errors.
    if (!people)
    {
        cout << "Error opening file. Program aborting." << endl;
        return 0;
    }

    // Read and display record 1 (the second record).
    cout << "Here is record 1:" << endl;
    people.seekg(byteNum(1), ios::beg); // Move to the second record.
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    showRec(person);

    // Read and display record 0 (the first record).
    cout << "\nHere is record 0:" << endl;
    people.seekg(byteNum(0), ios::beg); // Move to the first record.
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    showRec(person);

    // Close the file.
    people.close();

    return 0;
}