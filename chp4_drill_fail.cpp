// this program reads in 2 integers and prints them

#include "std_lib_facilities.h"

int main()
{
    
    vector<double>val; //creates a int vector to val
    
    double vals; // initializes vals as a double
    
    while (cin >> vals) {  // created while loop to read in vector
        
        val.push_back(vals); //pushes the values into the vector 
    }
    
    for (int i = 0;  cout << val[i] << "\n"; // val[1] is the first integer, val[2] is the second integer, can technically add more as i is the counting variable
    
        if (val[0] > val[1]) {
            cout << "The smaller value is: " << val[1] << "\n"; // try to create a function to read and compare the values
            cout << "The larger value is: " << val[0] << "\n";
    
        } else if (val[1] > val[0]) {
            cout << "The smaller value is: " << val[0] << "\n";
            cout << "The larger value is: " << val[1] << "\n";
    
        } else if (val[1] == val[0]) {
            cout << "The values are the same: " << val[0] << "\n";
    
        } else
            cout << "sorry idk what you're talkin bout\n"; i < val.size(); ++i) // creates for loop, initializing i and assigning it to 0, i continues to the size of the vector, adding 1
      
}   