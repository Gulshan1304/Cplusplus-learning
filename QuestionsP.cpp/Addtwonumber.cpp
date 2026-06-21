// Add two numbers using function.
#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int main () {
    int x,y;
    cout <<" Enter two number:";
    cin >> x >> y;
    cout <<"Sum = " << add(x,y)<<endl;
    return 0;
}