#include<iostream>
using namespace std;
class calculator
{
    public:
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if(b!=0)
    return a / b;
    else
    {
        cout<<"Error: Division by zero is not allowed."<<endl;
        return 0;
    }
}
int modulus(int a, int b)
{
    return a % b;
}
};
int main()
{
calculator c;
int a,b;
cout<<"Enter two integers:"<<endl;
cin>>a>>b;
cout<<"Addition: "<<c.add(a, b)<<endl;
cout<<"Subtraction: "<<c.subtract(a, b)<<endl;
cout<<"Multiplication: "<<c.multiply(a, b)<<endl;
cout<<"Division: "<<c.divide(a, b)<<endl;
cout<<"Modulus: "<<c.modulus(a, b)<<endl;
return 0;
}
