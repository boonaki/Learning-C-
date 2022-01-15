#include "std_lib_facilities.h"

int square(int v) {
    int x = 0; //result variable
    int count = 0; //keeps count of how many times the loop was ran
    while (count<v){  //termination criteria
        x = x+v; //
        ++count;
    }
  
    return x;   //this is used to return back to the line 11 after finished
}               // with the int x value, because line 3 starts with an int type
                //also the result of this function
int main ()
{
    for (int i = 0; i < 100; ++i) 
        cout << i << '\t' << square(i) << "\n";
        
}


