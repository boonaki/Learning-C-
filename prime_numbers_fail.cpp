#include "std_lib_facilities.h"

vector<int>primes = {2, 3, 5};
int flag = 0;




void checkifprime(int x)
{
    double remainder;

    int m = x/2;

    for (int b = 2; b <= m; ++b)
    {
        remainder = x % b;
        if (remainder == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag = 0)
    {
        primes.push_back(x);
    }
}


int main() {

    for (int x = 5; x < 100; ++x) {
        checkifprime(x);    
    }
    
    for (int num:primes)
    {
        cout << primes[num] << "\n";
    }

}