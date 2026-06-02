#include<iostream>
using namespace std;
int main() {

    int a = 10;
    int b = 20;

    // Arithmetic Operators
    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "b / a = " << b / a << endl; // Division
    cout << "b % a = " << b % a << endl; // Modulus

    // Relational Operators
    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b: " << (a > b) << endl;   // Greater than
    cout << "a < b: " << (a < b) << endl;   // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to
// Logical Operators

 int c = 30;
    cout << "(a < b) && (b < c): " << ((a < b) && (b < c)) << endl; // Logical AND
    cout << "(a < b) || (b > c): " << ((a < b) || (b > c)) << endl; // Logical OR
    cout << "!(a < b): " << (!(a < b)) << endl; // Logical NOT
    
    // Assignment Operators
    int x = 5;
    x += 10; // Equivalent to x = x + 10
    cout << "x after += 10: " << x << endl;
    x -= 5; // Equivalent to x = x - 5
    cout << "x after -= 5: " << x << endl;
    x *= 2; // Equivalent to x = x * 2
    cout << "x after *= 2: " << x << endl;
    x /= 3; // Equivalent to x = x / 3
    cout << "x after /= 3: " << x << endl;
    x %= 4; // Equivalent to x = x % 4
    cout << "x after %= 4: " << x << endl;


    return 0;
}