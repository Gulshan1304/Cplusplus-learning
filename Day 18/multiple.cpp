#include<iostream>
using namespace std;
class Father
{
    public:
    void showFatherProperty()
    { 
    cout <<"Father property" << endl;
}
};
class Mother
{
    public:
    void motherProperty()
    {
        cout << "Mother property"<<endl;

    }

};

class Son:public Father,public Mother
{
    public:
    void showSonProperty()
    {
        cout<<"Son property"<<endl;
    }
};
int main ()
{
    Son s;
    s.showFatherProperty();
    s.motherProperty();
    s.showSonProperty();
    return 0;
}
