#include<iostream>
using namespace std;
int main (){
int a, b;
cout <<"Enter integer a:";
cin >>a;
cout<<"Enter integer b:";
cin >>b;
char op;
cout<<"Enter operator(+,-,*,/,%):";
cin>>op;
switch(op){
    case'+':
    cout<<"Addition of"<<a<<" and "<<b<<" is "<<a+b<<endl;
    break;
    case'-':
    cout<<"Subtraction of"<<a<<" and "<<b<<" is "<<a-b<<endl;
    break;
    case'*':
    cout<<"Multiplication of"<<a<<" and "<<b<<" is "<<a*b<<endl;
    break;
    case'/':
    cout<<"Division of"<<a<<" and "<<b<<" is "<<a/b<<endl;
    break;
    case'%':
    cout<<"Modulus of"<<a<<" and "<<b<<" is "<<a%b<<endl;
    break;
    default:
    cout<<"Invalid operator!"<<endl;
}
    return 0;
}