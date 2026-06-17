#include<iostream>
using namespace std;
// if statement
int main () {
  
int n = 10 ;

if (n >=0) {
    // if n is greater than or equal to 0, then it is a positive number
    cout << "n is apositive"<< endl ;

}
// if else statement
if (n >=0) {
    // if n is greater than or equal to 0, then it is a positive number
    cout << "n is apositive"<< endl ;
}
else {
    // if n is less than 0, then it is a negative number
    cout << "n is a negative number" << endl ;
}
// if else if statement
if (n > 0) {
    // if n is greater than 0, then it is a positive number
    cout << "n is a positive number" << endl ;
}
else if (n < 0) {
    // if n is less than 0, then it is a negative number
    cout << "n is a negative number" << endl ;
}
else {
    // if n is equal to 0, then it is a zero
    cout << "n is a zero" << endl ;
}
// if else if-else ladder statement
if (n > 0) {
    // if n is greater than 0, then it is a positive number
    cout << "n is a positive number" << endl ;
}
else if (n < 0) {
    // if n is less than 0, then it is a negative number
    cout << "n is a negative number" << endl ;
}
else if (n == 0) {
    // if n is equal to 0, then it is a zero
    cout << "n is a zero" << endl ;
}
// nested if statement
if (n >= 0) {
    // if n is greater than or equal to 0, then it is a positive number
    cout << "n is a positive number" << endl ;
    if (n == 0) {
        // if n is equal to 0, then it is a zero
        cout << "n is a zero" << endl ;
    }
}
else {
    // if n is less than 0, then it is a negative number
    cout << "n is a negative number" << endl ;
}
// switch statement
switch (n) {
    case 0:
        cout << "n is a zero" << endl ;
        break ;
    case 1:
        cout << "n is a positive number" << endl ;
        break ;
    case -1:
        cout << "n is a negative number" << endl ;
        break ;
    default:
        cout << "n is a positive number" << endl ;
        break ;
}
return 0;
}   
