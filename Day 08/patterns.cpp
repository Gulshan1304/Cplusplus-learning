// Write a C++ program to print a square pattern of stars with 4 rows and 4 columns.
#include <iostream>
using namespace std;
int main () {
    for (int i=1; i<=4; i++) {
        for (int j=1; j<=4; j++) {
            cout << "*";
        
        }
        cout << endl;
    }
    return 0;
}