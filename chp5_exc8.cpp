#include "std_lib_facilities.h"


//read and store a series of integers and have the computer output the sum of the first N values
//first 2 numbers in (12, 6, 14, 24, 3) is equal to 18


int main()
{
    vector<double>values;
    int counter;

    cout << "Please enter a list of integers to be examined, terminating the list with a '|'\n";
    
    double val;
    double sum = 0;

    while (cin >> val) //pushes elements into vector
    {   
        values.push_back(val);
    }

    cin.clear();
    cin.ignore();
    /*
    had an issue where the second cin (line 31) wouldnt allow input, adding in line 23 and 24 fixed the issue
    i believe the issue was that when terminating the previous cin with a char type, the computer remembers that char type for cin
    and with line 31 being an int type, computer just skips. but idk thats a guess. 
    */
    cout << "Please enter a number to represent the length of which the numbers inputted are to be examined and summed.\n";
    cin >> counter;
    

    for (int x = 0; x < counter; ++x) //adding the elements of the vector to the sum
    {
        sum += values[x];
    }

    cout << "the sum of the first " << counter << " integers is " << sum;


}