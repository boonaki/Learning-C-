#include "std_lib_facilities.h"

/*
create a program that can solve quadratic equations
Ax^2 + Bx = C

*/


int main()
{
    double a, b, c, tempx_plus, tempx_minus, x_plus, x_minus;
    cout << "Input the variables(A, B, C) for the quadratic equation and the computer will output x\n"
         << "\tAx^2 + Bx + C\n"
         << "Please input your first variable (A)\n";

    cin >> a;
    cout << "Please input your second variable (B)\n";
    cin >> b;
    cout << "Please input your third variable (C)\n";
    cin >> c;

    b = 0 - b;
    double sqrt_num = pow(b, 2) - (4*a*c);

    tempx_plus = b + sqrt(sqrt_num);
    x_plus = tempx_plus/(2*a);

    tempx_minus = b - sqrt(sqrt_num);
    x_minus = tempx_minus/(2*a);

    cout << "x = " << x_plus << " & " << x_minus << "\n"
         << "\tA: " << a << "\n\tB: " << 0-b << "\n\tC: " << c 
}


    