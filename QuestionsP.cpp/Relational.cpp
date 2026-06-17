// A tea shop offers a loyalty program. Customers who buy more than 20 cups of tea get a special 'Gold' badge, and those who buys 10 to 20 cups get a "silver"badge.Write a program to display the badge they will receive based on number of cups they buy.
#include<iostream>
using namespace std;
int main () {
    int cups;
    cout << "Entert the nubers pg cups you have";
    cin >> cups;
    if (cups > 20) {
        cout << "You get a Gold badge" << endl ;
    }
    else if (cups >10 && cups <+20){
        cout << "You get a Silver badge" << endl ;

    }
    else {
        cout << " No badge for you" << endl ;
    }
        

    
    return 0;

}