#include "w3e_includes.h"

// Plain Old Data Structures
struct robot {
    int charge;
    string name;
};

void Display(vector<robot>& vector) {
    for(int i = 0; i < vector.size(); i++) {
        cout << vector[i].name << ", " << vector[i].charge;
        // this if statement will not run if it is not true.
        if(vector[i].charge < 5) {
            cout << "!!!";
        }
        cout << "\n";
    }
}


