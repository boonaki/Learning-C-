#include "std_lib_facilities.h"

//

int main() {   

    vector<double>distances;
    
    cout << "Please input a list of distances in miles\n"; 
    for (double distance; cin>>distance; )
        distances.push_back(distance);
    
    
    
    
    
    double sum = 0;
    
    for (double x : distances) 
        sum += x;

        cout << "the sum of the distances is " << sum << " miles\n";


    
}