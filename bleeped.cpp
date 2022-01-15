#include "std_lib_facilities.h"



vector<string>bad_words = {"fucking", "bitch", "fuck", "stupid" };

bool bad_word(string dolphin_noise)  // set to bool to return a true or false value (can be done with int)
{
    for (int f = 0; f < bad_words.size(); ++f) //creates loop and checks how many words are in phrase vector

        if (bad_words[f] == dolphin_noise) // creates if statement returning true to main function if an element of the vector is passed through the argument (line 35)

            return true; //returns true as its the end of the loop, no more words to check

    return false; // returns false if the argument isnt passed
        
} 


int main()
{

    vector<string>phrase;

    cout << "Please enter a phrase with rather vulgar language: \n";

    for (string words; cin >> words; )
    
        phrase.push_back(words);
    

    
    for (int x = 0; x < phrase.size(); ++x)

            if (bad_word(phrase[x]))

                cout << "bleep\n";

            else 
            
                cout << phrase[x] << "\n";
}