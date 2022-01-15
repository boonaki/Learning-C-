#include "std_lib_facilities.h"

int main()
{
    cout << "how many miles do you drive a day?\n";
    double miles;

    while (cin >> miles)
    {
        if (miles >= 0)
        {
            cout << "wow you drive " << miles * 1.609 << "km a day!";
        }
        else
            cout << "nah that aint it dawg\n";
    }
}