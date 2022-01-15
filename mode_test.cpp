#include "std_lib_facilities.h"


void printMode(int a[], int n) 
{  
    int b[n]; 
    int max = *max_element(a, a + n); 
    int t = max + 1; 
    int count[t]; 
    for (int i = 0; i < t; i++) 
        count[i] = 0; 
    for (int i = 0; i < n; i++) 
        count[a[i]]++; 
    int mode = 0; 
    int k = count[0]; 
    for (int i = 1; i < t; i++) { 
        if (count[i] > k) { 
            k = count[i]; 
            mode = i; 
        } 
    } 
  
    cout << "mode = " << mode; 
} 


int main()
{
    vector<int>a;
    


    cout << "input a list of numbers and the computer will output the mode\n";

    for (int counter; cin >> counter)
    {
        a.push_back(counter);
    }
    int n = a.size();

    printMode(a, n);

}