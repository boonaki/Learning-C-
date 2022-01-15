#include "std_lib_facilities.h"

int main ()
{
    double bill;
    char crnc = ' ';
    cout << "Please enter how much money you have\n" 
         << "\nfollowed by the currency (y, k or p)\n";
    cin >> bill >> crnc;

    if (crnc == 'y') {
        cout << bill << " yen is equal to " << bill * .0091 << " dollars\n";
    } else if (crnc == 'k') {
        cout << bill << " kroner is equal to " << bill * .11 << " dollars\n";
    } else if (crnc == 'p') {
        cout << bill << " pounds is equal to " << bill * 1.39 << " dollars\n";
    } else
        cout << "Sorry i dont know that unit\n";


}