#include "std_lib_facilities.h"



int main()
{
    vector<int>primes; // vector for output

    cout << "The following numbers are the prime numbers calculated from 0-100\n";

    int i, half_x = 0, flag = 0, x = 2; // declares and defines variables


    while (x < 100) //loop to go to 100
    {
        half_x = x/2; // makes calculation faster on the computer
        for (i = 2; i <= half_x; ++i) // 'i' starting at 2 and going up to x/2 or 'm'
        {
            if (x % i == 0) //checks if the remainder of x / i is equal to 0, meaning its not a prime number
            {
            
                flag = 1; // makes the flag = 1
                ++x; //increments x
                break; //ends the for loop
            }
        }
        if (flag == 0) //after for loop ends, it checks if x was a prime or not by reading the flag, and if it was...
        {
            primes.push_back(x); //push the integer (x) into the vector
            ++x; //incrememnts x
        }
        
        flag = 0; //resets the flag

    }

    for (int counter = 0; counter < 25; ++counter) // after while-loop is terminated, defines a variable for every int in primes
    {
        cout << primes[counter] << "\n"; //outputs list of primes
    }
}
