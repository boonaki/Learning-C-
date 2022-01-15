#include "std_lib_facilities.h"

const vector<char>operators = {'-', '+', '*', '/'};   
const vector<string>spelled_out = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
const vector<string>digit = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
const vector<int>digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void printoperators() {
    cout << "\t'+'\n"
         << "\t'-'\n"
         << "\t'/'\n"
         << "\t'*'\n";
}




bool checkop (char op) { // checks if operator is legal
    bool legal = false;
    for (auto legalop:operators) {
        if (op == legalop) {
            legal = true;
        }
    } return legal;
}





int main () {
    char op;
    string int1 = " ";
    string int2 = " ";
    double ans;

    int num1;
    int num2;

    cout << "Enter 2 single-digit values 0-9 (or a single-digit string) and a legal operator in this format\n"
         << "\tVALUE OPERATOR VALUE\n"
         << "Legal Operators are [-, +, /, *]\n";

    while (cin >> int1 >> op >> int2) {
        if (int1 == "stop") {
            return 0;
        }
        if (checkop(op)) {  
            for (int i = 0; i < spelled_out.size(); ++i) {

                //checks if ints are spelled
                if (int1 == spelled_out[i]) {
                    num1 = digits[i];
                }
                else if (int1 == digit[i]) {
                    num1 = digits[i];
                }
                
                if (num1 >= 10) {
                    cout << "please use a legal integer\n";
                }
                
                    
                
                //maybe make these into functions for debugging
                
                if (int2 == spelled_out[i]) {
                    num2 = digits[i];
                }
                else if (int2 == digit[i]) {
                    num2 = digits[i];
                }
                
                if (num2 >= 10) {
                    cout << "please use a legal integer\n";
                }
                
            }
                switch (op) {
                case '+':
                    ans = num1 + num2;
                    cout << "\t" << num1 << " + " << num2 << " = " << ans << "\n";
                    break;
                case '-':
                    ans = num1 - num2;
                    cout << "\t" << num1 << " - " << num2 << " = " << ans << "\n";
                    break;
                case '/':
                    ans = num1 / num2;
                    cout << "\t" << num1 << " / " << num2 << " = " << ans << "\n";
                    break;
                case '*':
                    ans = num1 * num2;
                    cout << "\t" << num1 << " * " << num2 << " = " << ans << "\n";
                    break;
                }
        }
        
        else {
            cout << "Please use a legal operator\n";
            printoperators();
        }
    }
}