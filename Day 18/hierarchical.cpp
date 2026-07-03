#include<iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal can eat." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "Cat meows." << endl;
    }
};

class Cow : public Animal
{
public:
    void moo()
    {
        cout << "Cow moos." << endl;
    }
};

int main()
{
    Dog d;
    Cat c;
    Cow cw;

    d.eat();      // Inherited from Animal
    d.bark();

    cout << endl;

    c.eat();      // Inherited from Animal
    c.meow();

    cout << endl;

    cw.eat();     // Inherited from Animal
    cw.moo();

    return 0;
}