// Constants are read-only.
// they are set when you create them, and cannot be changed.
// Brian Foster

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "All about Constants!\n";
    int playerHealth = 30;
    int monsterAttack = 0;          // same as "monster"
    int playerDefend = 0;           // same as "player"
    int totalGold = 0;
    int droppedGold = 0;

    while(true) {
        cout << "An enemy attacks!\n";
        // calculate all values.
        monsterAttack = rand() % 5+3;   // range of 3-8
        playerDefend = rand() % 5+4;     // defenders advantage, range of 4-9
        droppedGold = rand() % 20+5;

        // check the numbers

        if(monsterAttack > playerDefend) {
            cout << "The monster got us real good! Ouch!\n";
            playerHealth -= monsterAttack;      // used to be 30, now it's 25 or something.
        } else {
            cout << "We successfully defended against that attack!\n";
            playerHealth -= 1;        // it hurts to use our shield
            cout << "The monster died of fright!\n";
            totalGold += droppedGold;
            cout << "You now have " << droppedGold << ".\n";
        }
    }



    return 0;
}