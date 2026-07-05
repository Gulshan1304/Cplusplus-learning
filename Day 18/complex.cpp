#include<iostream>
using namespace std;

class Complex
{
    int x;
    int y;

public:

    void setData(int p, int q)
    {
        x = p;
        y = q;
    }

    Complex add(Complex z1)
    {
        Complex temp;
        temp.x = x + z1.x;
        temp.y = y + z1.y;
        return temp;
    }

    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setData(10, 20);
    c2.setData(30, 40);

    c3 = c1.add(c2);

    c3.display();

    return 0;
}