#include<iostream>
using namespace std;

class A
{

};
class B: public A
{

};
class C: public B
{

};
int main()
{
    C c;
    A *a = &c; // Upcasting
    B *b = &c; // Upcasting
    return 0;
}