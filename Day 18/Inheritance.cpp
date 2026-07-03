#include<iostream>
using namespace std;
class samsung
{
    int mic;
    int key;
    int camere;
    public:
        void settings();
    {

    }
    void setRadio()
    {

    }
};
class samsung1:public samsung
{
    public:
        void setRadio()
        {
            cout<<"Radio is set"<<endl;
        }
};