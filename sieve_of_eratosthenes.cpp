#include "std_lib_facilities.h"

/*
create an input of an integer 'n' greater than 1
goal is to output all prime numbers from 2 - 'n'
create vector of boolean values of the integer values between 2 - 'n' (all values are true at first)
create a for loop for all the integers in the vector, that dont exceed the square root of n, to be checked
if vector[integer] is true j = i^2, i^2+i, i^2+2i, j^2+3i, j^2+4i... not exceeding n
vector[j] is equal to false
ouput integers in vector that are still true
*/


void sieve_of_eratosthenes(int user_input)
{
    vector<int>primes;
    for (int x = 0; x < user_input + 1; ++x)
    {
        primes.push_back(1);
    }

    for (int p = 2; p*p <= user_input; ++p)
    {
        if (primes[p] == 1)
        {
            for (int i = p*2; i<=user_input; i += p)
            {
                primes[i] = 0;
            }
        }
    }
    for (int p=2; p <= user_input; ++p)
    {
        if (primes[p])
        {
            cout << p << "\n";
        }
    }
}



int main()
{
    
    int user_input;

    cout << "Please enter an integer larger than 2 and the computer will output all primes numbers between 2 and your input\n";
    while (cin >> user_input)
    {
        if (user_input <= 1)
        {
            cout << "that is not allowed\n";
            return 0;
        }
        else
        {
            sieve_of_eratosthenes(user_input);
        }
    }
}