#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> values(100);

    cout << "The values vector has " << values.size() << " elements." << endl;
    cout << "I will call the clear member function..." << endl;

    values.clear();

    cout << "Now, the values vector has " << values.size() << " elements." << endl;

    return 0;
}