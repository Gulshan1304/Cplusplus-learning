#include<iostream>

using namespace std;
    class A
    {
 int x;
 public:
 void f1()
 {

 }
    };
    class B:public A
    {
        int y;
        public:
        void f2()
        {

        }                                                                                                                           
      

    };

    int main()
    {
        B b;
        b.f1();
        b.f2();
        return 0;
    }