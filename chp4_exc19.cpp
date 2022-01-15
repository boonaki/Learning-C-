#include "std_lib_facilities.h"
/*
take in user input of name and age (ex: John 28)
check each name is unique
output all names
*/


int main()
{
    vector<string>names; // names vector
    vector<int>ages; // ages vector
    //indexes of both vectors must match

    string user_name; 
    int user_age;

    cout << "Please input the first name and an age (ex: Joe 21).\nWhen finished with the input, type 'noname 0' to access directory or 'stop' to end code\n";

    while (cin >> user_name >> user_age) //while loop that takes in name and age until terminated
    {
        
        if (user_name == "noname" && user_age == 0)
        {
            break;
        }
        else if (user_name == "stop")
        {
            return 0;
        }
        
        for (int i = 0; i < names.size(); ++i)
        {
            if (user_name == names[i])
            {
                cout << "This name is already in the directory!\n";
                break;
            }
        }
        
        names.push_back(user_name);
        ages.push_back(user_age);

        if (names.size() != ages.size() )
        {
            cout << "Please enter a name and age (ex: Joe 21)\n";
            break;
        }
    }

    for (int x = 0; x < names.size(); ++x)
    {
        cout << "\t" << names[x] << " " << ages[x] << "\n";
    }
}