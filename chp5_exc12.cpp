#include "std_lib_facilities.h"

/*
create a vector of 4 integers (0-9)
user has to guess the integers
user takes repeated guesses until user has 4 bulls
1 bull is a correct number in the correct place
1 cow is a correct number but in wrong place
*/

int main()
{
    vector<int>comp = {9, 0, 2, 1};
    vector<int>user_guess;
    int num, bulls = 0, cows = 0;

    cout << "Input 4 integers to guess the computers' integers, each digit being in same space.\nA bull correct number in the correct space\nA cow is a correct number in the incorrect space.\nGame is terminated when your guesses match the computer\n";

    while (bulls < 4)
    {
        for (int x = 0; x < comp.size(); ++x) //creates for loop for input of max 4 digits
        {
            cin >> num;
            user_guess.push_back(num);
        }


        for (int y = 0; y < comp.size(); ++y)
        {
            if (comp[y] == user_guess[y]) //checks if equal position + equal value
            {
                ++bulls;
                if (bulls == 4)
                {
                    break;
                }
            }
            for (int i = 0; i < comp.size(); ++i) //checks if equal value but not equal position
            {
                if (user_guess[y] == comp[i]) 
                {
                    ++cows;
                    break;
                }
            }
        }
    
        if (bulls != 4)
        {
            cout << "You only have " << bulls << " bulls and " << cows << " cows -- Guess again!\n";
            user_guess.clear();
            bulls = 0;
            cows = 0;
        }
    }

    cout << "congrats you did it, the correct numbers were\n";

    for (int k = 0; k < comp.size(); ++k)
    {
        cout << user_guess[k] << " ";
    }
}