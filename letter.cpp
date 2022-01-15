#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter the name of who you want to write to\n";
    string first;
    cin >> first;
    cout << "Dear " << first << ",\n";
    
    cout << "\nPlease type what you would like your letter to contain\n";
    string meat;      //this doesnt do what i would like it to do
    cin >> meat;      //because idk how, so come back and fix this
    cout << "Dear " << first << ",\n"
         << "\n" << meat << "\n";
}