#include "std_lib_facilities.h"

/*
i have to build this program by entering in pieces of code given to me by the book
the book gave me a template to start entering the pieces, i just need to find where they go
the program will output "Success!" when finsished
*/



int main()
{
    try {
        
        cout << "SUcc\n";
        keep_window_open();
        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << "\n"; //cerr is almost the same as cout except for errors
        keep_window_open();
        return 1;
    }
    catch (...) {
        cerr << "oops: unknown exception\n";
        return 2;
    }
}