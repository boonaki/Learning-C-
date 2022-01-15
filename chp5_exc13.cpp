#include "std_lib_facilities.h"


/*
create a vector of 4 integers (0-9)
user has to guess the integers
user takes repeated guesses until user has 4 bulls
1 bull is a correct number in the correct place
1 cow is a correct number but in wrong place
have the game be replayable with random numbers
*/




void game(int p)
{
    
    vector<int>comp;
    vector<int>user_guess;
    
    int num, bulls = 0, cows = 0;

    if (p > 0)
    {
        int n;
        cout << "input a number before proceeding\n";
        cin >> n;
        seed_randint(n);

    }

    for (int x = 0; x < 4; ++x)
    {
        comp.push_back(randint(10));
    }

    while (bulls < 4)
    {
        for (int x = 0; x < comp.size(); ++x) //creates for loop for input of max 4 digits
        {
            cin >> num;
            if (num)
            {
                user_guess.push_back(num);
            }
            else
            {
                cout << "sorry i dont understand\n";
            }
            
        }


        for (int y = 0; y < comp.size(); ++y)
        {
            if (comp[y] == user_guess[y]) //checks if equal position + equal value
            {
                ++bulls;
                break;
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

    comp.clear();

    if (first == false)

}

int main()
{
    string start;

    for (int p = 0; p < 100; ++p)
    {
        cout << "Input 4 integers to guess the computers' integers, each digit being in same space.\n"
             << "A bull correct number in the correct space\nA cow is a correct number in the incorrect space.\n"
             << "Game is terminated when your guesses match the computer\n"
             << "Type 'ready' to begin or type 'close' to terminate game\n";

        cin >> start;

        if (start == "ready")
        {
            cout << "Input your first 4 guesses\n"
                 << "In this format:\n\tX X X X\n";
            game(p);
        }
        else if (start == "close")
        {
            return 0;
        }
        else
        {
            cout << "sorry i dont understand\n";
        }

    }

    

}

