#include "std_lib_facilities.h"






int main () {

    string ok = " ";
    cout << "Please think of a number 1-100 (type 'ok' when you are ready to start)\n";
    int counter = 0;
    while (cin >> ok) {
        

        if (ok != "ok") {
            cout << "What?\n";
            ++counter;
        }
        
        else if (ok == "ok") {
            cout << "thanks\n";
            break;
        }
        
    }
    //int answer;
    int answer2;
    int answer;
    int current = 50;
    int previous = 0;
    string input;
    int count;
    bool first = 1;
    

    cout << "is your number 50? (respond whether your number is 'bigger' or 'smaller' or 'yes')\n";
    while (cin>>input) {
        if (first && input == "bigger") {
            current = 75;
            previous = 50;
            cout << "is your number " << current << "?\n";
            
            first = 0;
        }
        else if (first && input == "smaller") {
            current = 25;
            previous = 50;
            cout << "is your number " << current << "?\n";
            
            first = 0;
        }
        else if (current < previous && input == "bigger") {
            answer = previous - current;
            answer2 = answer/2;
            previous = current;
            current = current + answer2;
            cout << "is your number " << current << "?\n";
        }
        else if (current > previous && input == "smaller") {
            answer = current - previous;
            answer2 = answer/2;
            previous = current;
            current = current - answer2;
            cout << "is your number " << current << "?\n";
        }




        else if (current > previous) {
            answer = current - previous;
            answer2 = answer/2;
            previous = current;
            current = current + answer2;
            cout << "is your number " << current << "?\n";
        }
        else if (current < previous) {
            answer = previous - current;
            answer2 = answer/2;
            previous = current;
            current = current - answer2;
            cout << "is your number " << current << "?\n";
        }
       
        else if (input == "yes") {
            cout << "neato\n";
        }
        else {
            cout << "sorry i dont understand\n";
        }   
    }

                        


}