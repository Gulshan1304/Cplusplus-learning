// Different Number of Paramet
#include<iostream>
using namespace std;
void print (){
    cout << "No parameter" << endl;

}
void print(int x){
    cout << "value: " << x << endl;
}
int main() {
    print();
    print(10);
    return 0;
}