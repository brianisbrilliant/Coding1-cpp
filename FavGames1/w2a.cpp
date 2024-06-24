// Brian Foster
// Do-While Loop

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello world!\n";

    // this is an infinite loop
    // Control+C in the terminal to force close a program.
    int counter = 0;
    while(counter < 100) {
        // postfix increment operator.
        cout << "counter = " << counter++ << ".\n";
    }

    // a while loop tests at the top of the loop.
    // a do-while loop tests at the bottom of the loop.

    counter = 0;    // reset the counter.
    do {
        // prefix increment operator
        cout << "Counter: " << ++counter << ".\n";  
    } while(counter < 25);

    // when should we use either one?
    // basically, use the while loop UNLESS you are duplicating code.

    string input;       // if inside the loop, it is created and destroyed
                                // on each loop.
    // while either one of these tests is true, keep looping.
    do {
        
        cout << "Would you like to go adventuring?\n";
        cin >> input;
        if(input != "yes" && input != "no") {
            cout << "Invalid input, please try again.\n";
            continue;   // don't do anything else in the loop
                            // just start the loop over.
        }

        if(input == "yes") {
            cout << "Let's go!\n";
            // break;  // break is a way to get out of the loop.
        }
        else {
            cout << "Thanks for playing!\n";
            // break;  // break out of the loop.
        }
    } while(input != "yes" && input != "no");


    int playersChosenNumber = 0;    // always initialize these values
    cout << "What number would you like me to count up to?\n";
    cin >> playersChosenNumber;
    counter = 0;
    
    do {
        if(counter == playersChosenNumber) {
            cout << "We've found that number! Breaking out of the loop.\n";
            break;
        }
        if(counter == 13 || counter == 316 || counter == 666) {
            cout << "I am a little stitious.\n";
            continue;
        }
        cout << "Computer yells: " << counter << ".\n";
    } while(counter++ < 1000);

    counter = 0;
    while(true) {
        counter += 1;
        
        if(counter > 10) {
            break;
        }
    }




















    if(1+1 == 4) {
        cout << "Throwing an error code because math doesn't work.\n";
        return 1;
    }

    return 0;       // why do we return zero?
                    // this is the end of the function.
                    // we are returning the variable from the function.
                    // this is for error codes
                    // returning zero means the program closed correctly.
}