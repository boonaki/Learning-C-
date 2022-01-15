#include "std_lib_facilities.h"

//FIBONACCI SEQUENCE
/*
add the previous 2 numbers in the vector and push the next int to the back of the vector
*/

int main()
{
    cout << "F I B O N A C C I\n";
    vector<int>fibonacci = {1};
    int num, previous, next;
    bool first = true;

    for (int x = 0; x < 50; ++x) // creates for loop to push the first 50 numbers of the sequence into the fibonacci vector
    {
        if (first)
        {
            fibonacci.push_back(1);
            first = false;
        }
        else
        {
            previous = fibonacci[x-1];
            num = fibonacci[x];
            next = num + previous;
            fibonacci.push_back(next);
        }
    }
    for (int y = 0; y < fibonacci.size(); ++y)
        {
            cout << fibonacci[y] << ", ";
        }

keep_window_open();

}
