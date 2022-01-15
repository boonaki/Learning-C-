#include "std_lib_facilities.h"

/*
write a program that can find the min, max and mode of a sequence of string numbers.
*/




int main()
{
    vector<int>index = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>count = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<string>strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    vector<string>digits = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    vector<int>user_conv;

    string val;

    cout << "Input a list of numbers from 0-10 and the computer will give you your minimum, maximum and mode values. (type 'break' when finished)\n";

    while (cin >> val) //takes in string input and converts it into numbers
    {
        if (val == "break" || val == "stop")
        {
            break;
        }
        for (int x = 0; x < strings.size(); ++x)
        {
            if (val == strings[x])
            {
                user_conv.push_back(index[x]);
            }
            else if (val == digits[x])
            {
                user_conv.push_back(index[x]);
            }
        }
    }

    int min, max;
    bool first = true;

    for (int counter : user_conv) //finds min and max
    {
        if (first)
        {
            max = counter;
            min = counter;
            first = false;
        }
        else if (counter > max)
        {
            max = counter;
        }
        else if (counter < min)
        {
            min = counter;
        }
    }

    for (int i = 0; i < index.size(); ++i) //reveals mode by incrementing count where the index of count is equal to a value in <vals>
    {
        for (int m : user_conv)
        {
            if (index[i] == m)
            {
                count[m]++;
            }
        }
    }
   
    int mode = 0, mode_check = count[0];

    for (int y = 1; y < count.size();++y) //separate and assigns mode to variable
    {
        if (mode_check < count[y])
        {
            mode_check = count[y];
            mode = index[y];
        }
    }

    cout << "Mode: " << mode << "\n" 
         << "Min: " << min << "\n"
         << "Max: " << max << "\n";





}