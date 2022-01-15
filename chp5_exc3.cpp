#include "std_lib_facilities.h"



double ctok(double c)
{
    double k = c + 273.15;
    return k;
}

int main()
{
    double c;
    cin >> c;
    if (c <= -273.15)
    {
        cout << "oops thats not possible\n";
    }
    else 
    {
        double k = ctok(c);
        cout << k << " kelvin\n";
    }
}