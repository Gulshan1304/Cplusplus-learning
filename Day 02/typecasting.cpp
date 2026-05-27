#include <iostream>
using namespace std;

int main() {

    int totalMarks = 500;
    int obtainedMarks = 420;

    float percentage = (float) obtainedMarks / totalMarks * 100;

    cout << percentage;

    return 0;
}