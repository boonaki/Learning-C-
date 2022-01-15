#include "std_lib_facilities.h"

int square(int v)
{
    int x = 0;
    int counter = 0;
    while (counter < v) {
        x = x+v;
        ++counter;
    } return x;
}


int main()
{
    int num;
    cout << "Enter a value\n";
    cin >> num;
    cout << square(num) << "\n";

}  
