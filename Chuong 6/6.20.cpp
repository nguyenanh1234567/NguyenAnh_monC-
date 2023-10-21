#include <iostream>
using namespace std;

// Hằng số toàn cục.
const int BIRDS = 500;

// Khai báo nguyên mẫu hàm.
void california();

int main()
{
    cout << "In main there are " << BIRDS
         << " birds.\n";
    california();
    return 0;
}

//*************************************
// Hàm california *
//*************************************
void california()
{
    const int BIRDS = 10000;
    cout << "In california there are " << BIRDS
         << " birds.\n";
}