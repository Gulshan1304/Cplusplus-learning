#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("input.txt");
    ofstream destination("output.txt");

    string line;

    while (getline(source, line)) {
        destination << line << endl;
    }

    source.close();
    destination.close();

    cout << "File copied successfully.";
    return 0;
}