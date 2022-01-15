#include "std_lib_facilities.h"

constexpr double cm_to_m = 0.01; // 1 cm is 1/100 of a meter
constexpr double in_to_m = 2.54*cm_to_m; // 1 inch is 2.54cm ^
constexpr double ft_to_m = 12*in_to_m; // 1 foot is 12 inches ^

const vector<string>legalunits = {"in", "cm", "ft", "m"};

vector<double>valMeters;

void printlegalunits() {
    cout << "\tin for inches\n"
         << "\tcm for centimeters\n"
         << "\tm for meters\n"
         << "\tft for feet\n";
}


bool legal_Unit(string unit) { //t/f statement for a unit variable
    bool legal = false; //makes it false when called
    for (auto legal_unit:legalunits) { // for every legal_unit in the legal units vector
        if (unit == legal_unit){ // check if unit is a legal unit, make legal true, return true to line 40
            legal = true;
        }
    }
    return legal;
}


double convertometer(double val, string unit) {
    if (unit == "cm") {
        return val*cm_to_m;
    }
    if (unit == "in") {
        return val*in_to_m;
    }
    if (unit == "ft") {
        return val*ft_to_m;
    }
    else {
        return val;
    }
}



int main ()
{
    cout << "yer enter a double value (followed by one of these units)\n";

    printlegalunits();

    bool first = true;
    double val;
    double valMeter;
    double smallest;
    double largest;
    
    string unit = " ";
    string stop = "stop";
    
    
    while (cin >> val >> unit) { // creates an input loop
        
        if (unit == stop) {
            break;
        }
        
        if (legal_Unit(unit)) { 
            valMeter = convertometer(val, unit);
            valMeters.push_back(valMeter);
            cout << val << unit;
            double sum = 0;

            if (unit != "m") {
                cout << " (" << valMeter << "m)\n";
            }

        
            if (first) { //if the bool is true (which it already is)
                first = false; //assigns the bool to false, so that the next loop it isnt first
                smallest = valMeter; //assign the val to smallest
                largest = valMeter; // and largest variables
                cout << valMeter << unit << " is first thererfore the smallest and largest\n"; // couts first number
            } 
        
        // og if statement becomes false after first input,
            else if (valMeter < smallest) { // if val is less than smallest (smallest assigned during first input) ->
                cout << valMeter << " is the smallest value so far\n"; // outputs number
                smallest = valMeter; // assigns val to smallest number
            
            } 
        
        //if the first else if statement is false, computer proceeds into here
            else if (valMeter > largest) { //checks if val is greater than largest
                cout << valMeter << " is the largest value so far\n"; //if so, output number
                largest = valMeter; //assign val to largest
            
            } 
        
        //if neither of those is true, computer proceeds into here
            else {
                cout << "\n";
            }

            for (double x:valMeters) sum += x;

            cout << "The sum of the numbers are: " << sum << "\n";

        } else {
            cout << "please use a legal unit provided\n";
            printlegalunits();
        }
    }

    for (double x:valMeters) {
        cout << x << "m\n";
    }
    return 0;
}