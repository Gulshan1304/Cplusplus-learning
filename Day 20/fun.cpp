#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,5> arr = {10,20,30,40,50};

    cout << "First Element : " << arr.front() << endl;
    cout << "Last Element  : " << arr.back() << endl;
    cout << "Size          : " << arr.size() << endl;
    cout << "Element at 2  : " << arr.at(2) << endl;

    return 0;
}