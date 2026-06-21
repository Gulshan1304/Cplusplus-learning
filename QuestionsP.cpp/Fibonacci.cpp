// Recursive Fibonacci
#include<iostream>
using namespace std;
void fibonacci(int r){
    int a = -1, b= 1, c;
    for (int i = 0; i<r ; i++){
        c=a+b;
    cout << c << " ";
    a=b;
    b=c;

    }
}
int main () {
    int r ;
    fibonacci (r);
    return 0;
}