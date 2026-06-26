#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {

    Student s;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Age: ";
    cin >> s.age;

    cout << "\nStudent Details\n";
    cout << s.name << endl;
    cout << s.age;

    return 0;
}