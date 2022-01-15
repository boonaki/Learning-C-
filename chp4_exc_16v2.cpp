#include "std_lib_facilities.h"



int main()
{
    vector<int>index;
    vector<int>count;
    vector<int>vals;
    int input, largest, smallest;
    bool first = true;
    
    cout << "Please enter a list of numbers (spaced with no commas, ending with a period) and the computer will output the m o d e\n";

    while (cin >> input) //this is the input 'loop'
    {
        vals.push_back(input); // stores input here
    }

    /*
    find the max value of the input list and create a vector to count the index from 0-max_input
    use index of one vector to store how many are in each point of the index, in another vector
    (in (4,5,4,7,4), the index 4 has 3 stored, index 5 has 1 stored, and index 7 has 1)
    */

   for (int values : vals) // finds smallest and largest value in vector
   {
       if (first)
       {
           largest = values;
           smallest = values;
           first = false;
       }
       else if (values > largest)
       {
           largest = values;
       }
       else if (values < smallest)
       {
           smallest = values;
       }  
   }

   for (int x = 0; x < largest+1; ++x)
   {
       index.push_back(x); //creates vector of index 0 to highest user value
       count.push_back(0); //creates vector of 0's from 0 to highest user value
   }

   for (int i = 0; i < index.size(); ++i) //reveals mode by incrementing count where the index of count is equal to a value in <vals>
   {
       for (int m : vals)
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

    cout << "Mode: " << mode; //outputs mode
}