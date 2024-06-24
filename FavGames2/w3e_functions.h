#include "w3e_includes.h"

int AddTwoNumbers(int first, int second) {
    return first + second;
}

void Display(vector<string>& vector) {
    for(int i = 0; i < vector.size(); i++) {
        cout << i + 1 << ". " << vector[i] << "\n";
    }
}

void Display(vector<int>& vector) {
    for(int i = 0; i < vector.size(); i++) {
        cout << i + 1 << ". " << vector[i] << "\n";
    }
}