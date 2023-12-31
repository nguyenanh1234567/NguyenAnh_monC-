#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include <cstring> // Needed for strlen and strcpy

// ContactInfo class declaration.
class ContactInfo
{
private:
    char *name;  // The name
    char *phone; // The phone number

public:
    // Constructor
    ContactInfo(char *n, char *p)
    {
        // Allocate memory for the name and phone number.
        name = new char[strlen(n) + 1];
        phone = new char[strlen(p) + 1];

        // Copy the name and phone number to the allocated memory.
        strcpy(name, n);
        strcpy(phone, p);
    }

    // Destructor
    ~ContactInfo()
    {
        delete[] name;
        delete[] phone;
    }

    const char *getName() const
    {
        return name;
    }

    const char *getPhoneNumber() const
    {
        return phone;
    }
};

#endif