// WAP that allows a user to input the number of tea bags they have. Assign additional bags to them based on certain conditions(e.g., if they have fewer than 10 bags,give them 5 extra). Update the origon number using assignment operatiors.
#include <iostream>
        using namespace std;
            int main (){
                int numberofBags;
                    cout << "Enter the number of tea bags you have: ";
                        cin >> numberofBags;
                        if (numberofBags < 10) {
    numberofBags += 5; // give them 5 extra bags
   cout << " Your total bags are : " << numberofBags;

}
    return 0;
}