#include "std_lib_facilities.h"

/*implement a function to perform a basic string compression
ex: "aaabbbbccd" would be compressed to "3a4b2c1d"
if the compressed string is longer than the other, return the string
*/

Token_get_Token();

vector<Token>toks;

int main() 
{
    cout << "Enter a string to get compressed\n";
    while (cin)
    {
        Token t = get_token();
        toks.push_back(t);
    }

    for (int x = 0; x < toks.size(); ++x) {
        cout << toks[x];
    }

    

}