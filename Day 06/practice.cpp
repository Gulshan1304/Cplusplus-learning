// Given two integers a and b, use a for loop to print every number from a to b.
// Print the English word for numbers 1 to 9.
// For numbers greater than 9:
// Print "even" if the number is even.Print "odd" if the number is odd.Print each result on a new line.
#include<iostream>
using namespace std;
int main (){
    int a, b;
    cout <<"Enter integer a: ";
    cin >>a;
    cout<<"Enter integer b: ";
    cin >>b;
for (int i = a; i <= b; i++){
    if (i == 1) {
        cout << "one" << endl;
    } else if (i == 2) {
        cout << "two" << endl;
    } else if (i == 3) {
        cout << "three" << endl;
    } else if (i == 4) {
        cout << "four" << endl;
    } else if (i == 5) {
        cout << "five" << endl;
    } else if (i == 6) {
        cout << "six" << endl;
    } else if (i == 7) {
        cout << "seven" << endl;
    } else if (i == 8) {
        cout << "eight" << endl;
    } else if (i == 9) {
        cout << "nine" << endl;
    } else {
        if (i % 2 == 0) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }
}
return 0;
}