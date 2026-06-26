#include <iostream>
using namespace std;

enum Signal {
    Red,
    Yellow,
    Green
};

int main()
{
    Signal light = Green;

    if(light == Green)
        cout<<"Go";

    return 0;
}