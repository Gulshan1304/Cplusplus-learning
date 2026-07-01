#include <iostream>
#include <vector>
using namespace std;

class Chai
{
    string teaName;
    int servings;
    vector<string> ingredients;

public:
    void displayChaiDetails()
    {
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;

        cout << "Ingredients: ";

        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }

        cout << endl;
    }
};

int main()
{
    Chai c;
    c.displayChaiDetails();

    return 0;
}