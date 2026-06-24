#include <iostream>
using namespace std;
int main(){
    int *ptr = new int;
    *ptr = 100;
    cout << "Value:" << *ptr << endl;
    cout <<"Address:" << ptr << endl;
    delete ptr;
    ptr = nullptr;
    return 0;
}