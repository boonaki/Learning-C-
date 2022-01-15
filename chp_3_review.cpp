#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter the recipient's name\n";
    string first_name; //declaring variable
    cin >> first_name;  // assigning + initialization
    string letter;

    letter =
        "Dear " + first_name + ",\n" +
        "\n     How are you doing? This coding is easy.\n" +
        "Have you seen anyone else here?\n";

            /// assinging a variable ^


        cout << "\n" << letter;
    
    cout << "\nEnter a name\n";
    string friend_name;    // declaring variable
    cin >> friend_name;
    
    cout << letter << "Are they are boy or a girl? (enter m or f)\n";
    char gender;
    cin >> gender;
    if (gender == 'm' || gender == 'M') { // or statement used here
        cout << letter << "\nIf you see him, please ask him to suck me off\n";
    } else if (gender == 'f' || gender == 'F') { // either has to be true
        cout << letter << "\n If you see her, please tell her to suck me off\n";
    } else {
        cout << letter << "\n If you see them, please tell them to suck me off\n";
    }
    
    cout << "Enter age\n";
    int age;
    cin >> age;
    if (age <= 0 || age >= 110 ) {
        cout << "nah that dont sound right\n";
    } else if (age <= 12 ) {
        cout << "next year you'll be " << age+1 << "\n";
    } else
        cout << "You're old as fuck yo\n";

}