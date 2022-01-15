#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a whole number\n";
    int val;
    cin >> val;
    
    
    if (val % 2) {  //val % 2 outputs 0, and 0 is interpreted as off and 1 is interpreted as on
        cout << "The value " << val << " is an odd number\n"; //i had to swicth the even and odd couts
    } else
        cout << "The value " << val << " is an even number\n";
}