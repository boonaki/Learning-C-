#include "std_lib_facilities.h"
//outputs if a word is repeated in a continuous string input loop
int main() 
{
    int word_count = 0;
    string previous = " ";
    string current;
    while (cin>>current) {
        ++word_count;
        if (previous == current)
            cout <<"word number: " << word_count << "\n"
                 <<"repeated: "<< current << '\n';
        previous = current;
    }
}