#include <iostream>
using namespace std;

int main()
{
    // FOR LOOP
    cout << "For Loop:" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    cout << endl;

    // WHILE LOOP
    cout << "While Loop:" << endl;
    int j = 1;

    while (j <= 5)
    {
        cout << j << endl;
        j++;
    }

    cout << endl;

    // DO-WHILE LOOP
    cout << "Do-While Loop:" << endl;
    int k = 1;

    do
    {
        cout << k << endl;
        k++;
    } while (k <= 5);

    cout << endl;

    // INFINITE LOOP (COMMENTED)
    /*
    while(true)
    {
        cout << "Hello" << endl;
    }
    */

    // BREAK STATEMENT
    cout << "Break Statement:" << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }

        cout << i << endl;
    }

    cout << endl;

    // CONTINUE STATEMENT
    cout << "Continue Statement:" << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }

        cout << i << endl;
    }

    cout << endl;

    // NESTED LOOP
    cout << "Nested Loop:" << endl;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}