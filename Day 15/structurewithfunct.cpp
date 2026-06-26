#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

void display(Student s)
{
    cout << s.name << endl;
    cout << s.age << endl;
}

int main()
{
    Student s1;

    s1.name = "Gulshan";
    s1.age = 19;

    display(s1);

    return 0;
}