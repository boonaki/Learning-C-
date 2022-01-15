#include "std_lib_facilities.h"

const vector<char>operators = {'-', '+', '*', '/', '%'};   // what is the difference between constexpr and const

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



int main() { // simple calc

    char op;
    double int1;       //first integer for user input
    double int2;       //second integer for user input
    int i = 0;
    double ans;


    string open = "open";
    cout << "Please type 'open' to start the calculator\n";
    while (cin >> open) {
        if (open != "open") {
            cout << "Please type 'open' to start the simple calculator\n";
            ++i;
        } else 
            break;
    }

    cout << "Enter 2 values and a legal operator in this format\n"
         << "\tVALUE OPERATOR VALUE\n"
         << "Legal Operators are [-, +, /, *]\n";


    while (cin >> int1 >> op >> int2) {
        if (checkop(op)) {
            
            switch (op) {
                case '+':
                    ans = int1 + int2;
                    cout << "\t" << int1 << " + " << int2 << " = " << ans << "\n";
                    break;
                case '-':
                    ans = int1 - int2;
                    cout << "\t" << int1 << " - " << int2 << " = " << ans << "\n";
                    break;
                case '/':
                    ans = int1 / int2;
                    cout << "\t" << int1 << " / " << int2 << " = " << ans << "\n";
                    break;
                case '*':
                    ans = int1 * int2;
                    cout << "\t" << int1 << " * " << int2 << " = " << ans << "\n";
                    break;
                case '%':
                    ans = int1 % int2;
                    cout << "\t" << int1 << " % " << int2 << " = " << ans << "\n";
                    break;
            }
        } else if (op == 's')
        {
            break;
        }
        
         else {
            cout << "Please use a legal operator\n";
            printoperators();
        }

    } 


} 



