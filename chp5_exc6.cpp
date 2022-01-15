#include "std_lib_facilities.h"

//write a program that converts from celcius to farhenheit

int main()
{
    double temp;
    char labl;

    cout << "Input a temperature and mark which unit you are using (Celsius or Fahrenheit\n";

    cin >> temp >> labl;

    if (labl == 'c') { //user input was celsius, convert to f
        double f = 9.0/5.0 * temp + 32;
        cout << f << " f\n";
    }
    else if (labl == 'f') { //user input was fahrenheit. convert to c
        double c = (temp-32) * 5/9;
        cout << c << " c\n";
    }
}