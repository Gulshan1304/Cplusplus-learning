#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // number of entries

    char grid[100][100];

    for(int i = 0; i < 100; i++)
        for(int j = 0; j < 100; j++)
            grid[i][j] = ' ';

    int maxX = 0, maxY = 0;

    for(int i = 0; i < n; i++) {
        char ch;
        int x, y;

        cin >> ch >> x >> y;

        grid[y][x] = ch;

        if(x > maxX) maxX = x;
        if(y > maxY) maxY = y;
    }

    for(int i = 0; i <= maxY; i++) {
        for(int j = 0; j <= maxX; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}