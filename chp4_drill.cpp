#include "std_lib_facilities.h"


int main()
{
    
    vector<string>units = {"in", "cm", "ft", "m"};
    
    double val1, val2;

    double diff = val1 - val2;

    while (cin >> val1 >> val2) {
        
        cout << val1 << ", " << val2 << "\n";
    
    } if (val1 == val2) {
        cout << "the values are equal\n";
    
    } else if (val1 < val2) {
        cout << "the smaller value is: " << val1 << "\n";
        cout << "the larger value is: " << val2 << "\n";
    
    } else {
        cout << "the smaller value is: " << val2 << "\n";
        cout << "the larger value is: " << val1 << "\n";
    }

    if (diff > 0 && diff < 1.0/100) {
            cout << "the numbers are almost equal\n";
    }
    return 0;
}