#include "std_lib_facilities.h"

const vector<string>spelled_out = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

const vector<int>digit = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

        


bool checkifspelled(string num_spell) {
    bool legal = false;
    for (auto number:spelled_out) { //spelled_out[i]
        if (num_spell == number) {
            
            legal = true;

        }
        //else if ()
    } return legal;
}




int main () {

    int num; //  POLYMORPHISM
    string num_spell = " ";
    cout << "input a single digit number or a typed-out single digit number and the computer will give you the number spelled out.\n";

    while (cin >> num_spell || cin >> num) {

        if (num == digit[num] ) { //checks if input is a number from the digit vector
            cout << spelled_out[num] << "\n"; //if it is, output the number from spelled out
        }

        else if (checkifspelled(num_spell)) { //check if input is a string from spelled_out vector
            for (int i = 0; i < spelled_out.size(); ++i) {
                if (num_spell == spelled_out[i]) {
                    cout << digit[i] << "\n";
                }
            }
        }

        else {
            cout << "sorry i dont understand\n";
        }
    }
}