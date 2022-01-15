#include "std_lib_facilities.h"


//square a number[rice] 64 times (each square representing one block in a game of chess)
//output the number of squares required for the [rice] >= 1000/1,000,000/1,000,000,000

int main () {
double rice = 1;
    bool check = 1;
    bool check2 = 1;
    bool check3 = 1;
    for (int piece = 1; piece <= 64; ++piece) {
            
        rice = rice + rice;
        cout << piece << "\t" << rice << "\n";

        if (rice >= 1000 && check) {
            cout << "1000 grains of rice is equal to " << piece << " checkboard pieces\n";
            check = 0;
            
        } else if (rice >= 1000000 && check2) {
            cout << "1,000,000 grains of rice is equal to " << piece << " checkerboard pieces\n";
            check2 = 0;
            
        } else if (rice >= 1000000000 && check3) {
            cout << "1,000,000,000 grains of rice is equal to " << piece << " checkerboard pieces\n";
            check3 = 0;
            
        }
    }

}