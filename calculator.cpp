#include "std_lib_facilities.h"

int main()
{
    double val1;
    double val2;
    cout << "Please enter a value\n";
    cin >> val1;
    cout << "Please enter a second value\n";
    cin >> val2;
    cout << "\nThose values added is equal to: " << val1 + val2 << "\n"
         << "Those values multiplied are equal to: " << val1 * val2 << "\n"
         << "Those values divided are equal to: " << val1 / val2 << "\n";
}