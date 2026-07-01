#include<iostream>
using namespace std;
class Example
{
    public:
 int x;
    int y;
    static  int z;
// instance
};
int Example::z; // scope resolution operator

int main (){
    Example e1;     
    Example e2;
    Example e3;
    e2.y = 31;
    e3.x = 72;
    e2.z = 67;
    e3.z = 21;
    cout << e2.z;
 return 0;;
}