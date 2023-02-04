#include <iostream>

using namespace std;

int main() {
    bool shopLoop = true;
    int moneyAmt = 0;
    int examineChoice = 0;
    int itemChoice = 0;
    char continueShopping = ' ';
    
    //Title
    cout << "Shop O' Programming Club" << endl;
    cout << "Welcome to the shop! What's your budget?" << endl;
    cin >> moneyAmt;
    
    //Shop Loop
    //Note: (shopLoop) is the same as (shopLoop == true)
    while (shopLoop == true){
        cout << "Choose which item to examine: " << endl;
        cout << "1. Bread" << endl;
        cout << "2. Sword of Stone" << endl;
        cout << "3. Crown of the Forest" << endl;
        cout << "4. I just wanna buy the item!" << endl;
        cin >> examineChoice;

        
        if (examineChoice == 1){
            cout << "Crafted in the finest mills and cooked with the most stable of ovens, this bread is the most legendary block of grain known to mankind. [$600]\n";
        }
        else if (examineChoice == 2){
            cout << "A extremely polished, hard rock on a pommel fit for a king's king. It glistens in the light like a diamond in the rough. [$1500]\n";
        }
        else if (examineChoice == 3){
            cout << "Found deep within the heart of the forest and forged by a master of the druidic arts. It has a soft glow, greener than a polished jade. [$8000]\n";
        }
        else if (examineChoice == 4){
            cout << "Which item would you like to buy?\n";
            cout << "1. Bread" << endl;
            cout << "2. Sword of Stone" << endl;
            cout << "3. Crown of the Forest" << endl;
            cin >> itemChoice;

            if (itemChoice == 1){
                if (moneyAmt >= 600){
                    cout << "Great choice. Here is your legendary bread." << endl;
                }
                else if (moneyAmt < 600) {
                    cout << "You are too poor to buy the legendary bread." << endl;
                }
            }
            if (itemChoice == 2){
                if (moneyAmt >= 1500){
                    cout << "Great choice. Here is your mythical Sword of Stone." << endl;
                }
                else if (moneyAmt < 1500) {
                    cout << "You are too poor to buy the mythical Sword of Stone." << endl;
                }
            }
            if (itemChoice == 3){
                if (moneyAmt >= 8000){
                    cout << "Great choice. Here is your ancient Crown of the Forest. Eònan pays his respects." << endl;
                }
                else if (moneyAmt < 8000) {
                    cout << "You are too poor to buy the ancient Crown of the Forest. Beware of the forest for the next few days, for it may be against you." << endl;
                }
            }
        }
        cout << "Would you like to continue shopping? [Y or N] ";
        cin >> continueShopping;

        if (continueShopping == 'y' || continueShopping == 'Y'){
            shopLoop = true;
        }
        else {
            shopLoop = false;
        }
    }
        cout << "Good luck with your travels, I hope to see you again one day." << endl;
}
