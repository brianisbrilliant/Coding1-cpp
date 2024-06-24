// Brian Foster
// headers

#include "w3e_includes.h"
#include "w3e_functions.h"
#include "w3e_structs.h"

int main() {
    cout << "Headers!\n";

    cout << "5+6=" << AddTwoNumbers(5,6) << "!\n";

    // string name = "brian";
    vector<string> favGames = {"Half-Life 2", "Breath of the Wild", "Nuclear Throne"};
    Display(favGames);

    vector<robot> bots(2);  
    bots[0].charge = 23;
    bots[0].name = "Robbie";
    bots[1].charge = 4;
    bots[1].name = "Artoo";

    Display(bots);

    return 0;
}