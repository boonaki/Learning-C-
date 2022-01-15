#include "std_lib_facilities.h"



double ctok(double c, char ui)
{
    double k;

    if (ui == 'c')
    {
        k = c + 273.15;
        return k;
    }
    else if (ui == 'k')
    {
        k = k - 273.15;
        return k;
    }
    
}

int main()
{
    double c;
    char ui;
    cin >> c >> ui;
    if (c <= -273.15)
    {
        cout << "oops thats not possible\n";
    }
    else 
    {
        double k = ctok(c, ui);
        cout << k << " kelvin\n";
    }
}