// Function overloading for area of square and rectangle.
#include <iostream>
using namespace std;

// Overload 1: square
double area(double side) {
    return side * side;
}

// Overload 2: rectangle
double area(double length, double breadth) {
    return length * breadth;
}

int main() {
    cout << "Area of square (side=5): " << area(5.0) << endl;
    cout << "Area of rectangle (4x6): " << area(4.0, 6.0) << endl;
    return 0;
}