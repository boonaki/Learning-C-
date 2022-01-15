#include "std_lib_facilities.h"

int main()
{
    vector <string> words;   // creates vector

    for (string temp; cin >> temp; ) // declares string variable and allows input of white-space seperated words stored in temp

        words.push_back(temp); // pushes input from temp into words vector
    
    cout << "Number of words: " << words.size() << "\n"; // counts the number of words in vector

    sort(words); //sorts vector

    for (int i = 0; i < words.size(); ++i) //delcares i and initializes it to 0, incrementing until i is greater than the number of words, terminate sequence

        if (i == 0 || words[i-1] != words[i]) // if i == 0 (ie the first loop), continue to next line. or if

            cout << words[i] << "\n";
}