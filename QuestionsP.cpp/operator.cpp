// Create a progrm tha t calculates the total price of tea cups.The user inputs the number of cups they  want and the price per cups. The program  should calculate the total price,apply 5% discount if the total is about a certain amount , and show the final peice.
#include <iostream>
using namespace std;
int main (){
    int numberOfCups;
    double pricePerCup, totalPrice, discountedPrice;
    cout << "Enter the number of cups: ";
    cin >> numberOfCups;
    cout << "Enter the price per cup: ";
    cin >> pricePerCup;

    totalPrice = numberOfCups * pricePerCup;
    // apply 5% discount if the total price is above a certain amount (e.g., $50)
    if (totalPrice > 100) {
        discountedPrice = totalPrice - (totalPrice * 0.06);
        cout << "Discounted price is : " << discountedPrice << endl;
    }
    else {
        cout << "Total price is : " << totalPrice << endl;  
        
    }


    return 0;
}