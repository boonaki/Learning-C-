#include "std_lib_facilities.h"
int main()
{
    cout <<"Please enter your name and age\n";
    string first_name;
    float age;
    cin >> first_name;
    cin >> age;
    cout <<"Hello, "<< first_name << " (age in months "<< age * 12 <<")\n";
}