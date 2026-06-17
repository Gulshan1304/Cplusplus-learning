#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {

    int age = 18;
    // int is a data type that can store whole numbers (integers) without decimal points. It typically uses 4 bytes of memory and can store values from -2,147,483,648 to 2,147,483,647.
    float height = 5.8;
    // float is a data type that can store decimal numbers (floating-point numbers). It typically uses 4 bytes of memory and can store values with a precision of about 7 decimal places.
    char grade = 'A';
    // char is a data type that can store a single character. It typically uses 1 byte of memory and can store values from -128 to 127 (or 0 to 255 if unsigned).
    string name = "Gulshan";
    // string is a data type that can store a sequence of characters (text). It is not a built-in data type in C++, but it is provided by the C++ Standard Library. A string can store any combination of letters, numbers, and symbols, and it can be of variable length.
    bool student = true; 
    // bool is a data type that can store one of two values: true or false. It typically uses 1 byte of memory and is used to represent logical values.

    cout << age << endl;
    cout << height << endl;
    cout << grade << endl;
    cout << name << endl;
    cout << student << endl;

    return 0;
}
