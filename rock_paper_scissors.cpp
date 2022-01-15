#include "std_lib_facilities.h"

const vector<string>rndm1 = {"paper", "scissor", "rock", "scissor", "scissor", "rock", "paper"};
const vector<string>rndm2 = {"scissor", "rock", "paper", "scissor", "rock", "rock", "scissor"};
const vector<string>rndm3 = {"paper", "paper", "scissor", "rock", "paper", "scissor", "rock"};

vector<int>user_score;
vector<int>comp_score;

// create a rock paper scissor game with a switch statment
// create 3 vectors for variation, and "randomness"
//each vector being a random sequence of r(ock)/p(aper)/s(cissor)

 void check_ans(char ans, int x) {
    switch (ans) {
        case 'r':
            cout << "Computer: " << rndm1[x] << "\n"; // output computer answer
            if (rndm1[x] == "paper") { //compare computer answer and tally score
                comp_score.push_back(1);
            } else if (rndm1[x] == "scissor") {
                user_score.push_back(1);    
            } 
            break;

        
        case 'p':
            cout << "Computer: " << rndm2[x] << "\n";
            if (rndm2[x] == "scissor") {
                comp_score.push_back(1);
            } else if (rndm2[x] == "rock") {
                user_score.push_back(1);
            } 
            break;
        
        case 's':
            cout << "Computer: " << rndm3[x] << "\n";
            if (rndm3[x] == "rock") {
                comp_score.push_back(1);
            } else if (rndm3[x] == "paper") {
                user_score.push_back(1);
            } 
            break;
    }
}

int main() {
    
    int x = 0;
    char ans = ' ';
    string answer = " ";

    cout << "Quick! rock, paper, or scissors?\n"; //rock > scissors, scissors > paper, paper > rock
    
    /*
    create user input loop
    create computer output loop using the vectors
    make rock > scissors, scissors > paper, paper > rock
    output winner
    */

    // ctrl+shift+i formatting

    while (cin>>answer) { //user input loop
        if (answer == "rock") {
            ans = 'r';
        } else if (answer == "paper") {
            ans = 'p';
        } else if (answer == "scissor") {
            ans = 's';
        } else {
            cout << "i dont understand\n";
        }
        check_ans(ans, x);
        cout << "User Score:" << user_score.size() << "\n" << "Computer Score: " << comp_score.size() << "\n";
        
        
        if (user_score.size() > 3) {
            cout << "congrats\n";
            return 0;
                
        } else if (comp_score.size() > 3) {
            cout << "goteem\n";
            return 0;
        } 
        
        ++x;
    } 
    
}


