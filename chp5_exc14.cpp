#include "std_lib_facilities.h"

/*
read each day of the week in pairs of day and value (Tuesday 14) from standard input
store the values in 7 individual vectors and output the list + output sum of values in each vector
*/


int main()
{
    string day = " ";
    int value;

    vector<int>monday;
    vector<int>tuesday;
    vector<int>wednesday;
    vector<int>thursday;
    vector<int>friday;
    vector<int>saturday;
    vector<int>sunday;
    vector<int>largest;

    int mon, tues, wed, thurs, fri, sat, sun;

    cout << "Input the day of the week and a value. Type 'exit' to compile and output data collected\n";

    while (cin >> day >> value) // ex wednesday 12
    {
        if (day == "exit")
        {
            break;
        }

        if (day == "monday" || day == "mon" || day == "Mon" || day == "Monday")
        {
            monday.push_back(value);
        }
        else if (day == "tuesday" || day == "Tuesday" || day == "tues" || day == "Tues")
        {
            tuesday.push_back(value);
        }
        else if (day == "wednesday" || day == "Wednesday" || day == "wed" || day == "Wed")
        {
            wednesday.push_back(value);
        }
        else if (day == "thursday" || day == "Thursday" || day == "thurs" || day == "Thurs")
        {
            thursday.push_back(value);
        }
        else if (day == "friday" || day == "Friday" || day == "fri" || day == "Fri")
        {
            friday.push_back(value);
        }
        else if (day == "saturday" || day == "Saturday" || day == "sat" || day == "Sat")
        {
            saturday.push_back(value);
        }
        else if (day == "sunday" || day == "Sunday" || day == "sun" || day == "Sun")
        {
            sunday.push_back(value);
        }
        else
        {
            cout << "invalid input\n";
        }
    }

    for (int x = 0; x < monday.size(); ++x)
    {
        mon += monday[x];
    }
    for (int c = 0; c < tuesday.size(); ++c)
    {
        tues += tuesday[c];
    }
    for (int w = 0; w < wednesday.size(); ++w)
    {
        wed += wednesday[w];
    }
    for (int t = 0; t < thursday.size(); ++t)
    {
        thurs += thursday[t];
    }
    for (int f = 0; f < friday.size(); ++f)
    {
        fri += friday[f];
    }
    for (int sa = 0; sa < saturday.size(); ++sa)
    {
        sat += saturday[sa];
    }
    for (int s = 0; s < sunday.size(); ++s)
    {
        sun += sunday[s];
    }
    
    cout << "Monday = " << mon << "\n" << "Tuesday = " << tues << "\n" << "Wednesday = " << wed << "\n" << "Thursday = " << thurs << "\n" << "Friday = " << fri << "\n" << "Saturday = " << sat << "\n" << "Sunday = " << sun << "\n";

    
    
    
}