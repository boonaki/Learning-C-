#include "std_lib_facilities.h"

int main()
{
    vector<double>temps; // creates vector

    for (double temp; cin>>temp; )  // declares temp variable, termination criteria is if input isnt a double

        temps.push_back(temp); // pushes the temp to the back of the vector

    
    
    double sum = 0; // declares sum variable and sets it to 0

    for (double x : temps) sum += x;   // for every (double)x in temps, increments sum by x

    cout << "Average Temperature: " << sum/temps.size() << "\n"; // couts avg temp by dividing sum by the elements of the vector (temps.size())

    
    
    sort(temps);  //sorts elements in (vector)
    
    cout << "Median Temperature: " << temps[temps.size()/2] << "\n"; // prints median temp by calling the value of temps[] and dividing    
     // the elements of the vector by 2
}