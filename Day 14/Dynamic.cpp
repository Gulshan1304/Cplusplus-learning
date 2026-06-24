#include <iostream>
using namespace std;

int main() {
    int n = 5;

    int* arr = new int[n];

    for(int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    cout << "Array Elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}