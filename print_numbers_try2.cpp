#include "std_lib_facilities.h"

const vector<string>spelled_out = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const vector<string>digit = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};






int main () {
    string num = " ";
    cout << "Please enter a single digit value, as a digit or typed-out, and the computer will give you its counter-part\n";

    while (cin >> num) {
        for (int i = 0; i < spelled_out.size(); ++i) {
            if (num == digit[i]) {
                cout << spelled_out[i] << "\n";
            }
            else if (num == spelled_out[i]) {
                cout << digit[i] << "\n";
            } 
        }

    }

}