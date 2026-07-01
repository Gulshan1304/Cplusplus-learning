# include<iostream>
using namespace std;
class Example
{
        public:
    int x, y;
    public:
    void f1()
{
    x=5;
    y=6;
};
void display(){
    cout << " "<< y;
}
};
int main (){
    Example x1;
    x1.f1();
    x1.display();
    return 0;
}