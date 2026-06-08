#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double p, r;
    int t;

    cin >> p >> r >> t;

    double si = 0;

    for (int i = 1; i <= t; i++) {
        si += (p * r) / 100.0;
    }

    cout << fixed << setprecision(2) << si;

    return 0;
}