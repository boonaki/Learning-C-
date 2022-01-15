#include "std_lib_facilities.h"


int main() {

    cout << "yo enter a double value with a unit\n";

    vector<string>units = {"in", "cm", "ft", "m"};
    
    bool first = true;
    double val;
    double smallest;
    double largest;

    while (cin >> val) { // creates an input loop
        
        cout << val; // outputs the input
        
        if (first == true) { //if the bool is true (which it already is)
            first = false; //assigns the bool to false, so that the next loop it isnt first
            smallest = val; //assign the val to smallest
            largest = val; // and largest variables
            cout << "\n" << val << " is first thererfore the smallest and largest\n"; // couts first number
        } 
        
        // og if statement becomes false after first input,
        else if (val < smallest) { // if val is less than smallest (smallest assigned during first input) ->
            cout << " is the smallest value so far\n"; // outputs number
            smallest = val; // assigns val to smallest number
            
        } 
        
        //if the first else if statement is false, computer proceeds into here
        else if (val > largest) { //checks if val is greater than largest
            cout << " is the largest value so far\n"; //if so, output number
            largest = val; //assign val to largest
            
        } 
        
        //if neither of those is true, computer proceeds into here
        else {
            cout << "\n";
        }
    }

    return 0;

}