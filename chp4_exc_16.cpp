#include "std_lib_facilities.h"

//find the mode of an inputed seqeunce of numbers

/*
input list of numbers into vector
check each number in vector to see if its repeated in the vector




*/



int main()
{
    vector<int>index;
    vector<int>count;
    vector<int>vals;
    int input;
    

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
    bool first = true;
    int smallest = 0;
    int largest = 0;
    
    for (int x : vals) //finds smallest and largest values
    {
        if (first)
        {
            smallest = x;
            largest = x;
            first = false;
        }
        else if (largest < x)
        {
            largest = x;
        } 
        else if (smallest > x)
        {
            smallest = x;
        } 
    }
    int largestest = largest + 1;
    
    sort(vals.begin(), vals.end()); //sorts input values from least to greatest

    for (int i = 0; i < largestest; ++i) //creates vector for the index and count
    {
        index.push_back(i);
        count.push_back(0);
        if (index[i] != vals[i])
        {
            vals.insert(vals.begin() + i, 0);
        }
        
    }
    for (int k = 0; k < largestest + 1; ++k)
    {
        if (vals[k] != 0)
        {
            count[vals[k]]++; // increments count vector at the index of where the input is, identifying the mode
        }
    }
    
    int mode = 0;
    int mode_check = count[0];

    for (int y = 1; y < index.size(); ++y)
    {
        if (mode_check < count[y])
        {
            mode_check = count[y];
            mode = index[y];
        }
    }
    
    cout << "Mode: " << mode;
    return 0;

}