#include "std_lib_facilities.h"

//calculate the area of a hexagon



int main()
{
    double side = 2;
    double area;

    double side_sq = pow(side, 2);

    area = (3*sqrt(3))/2 * side_sq;

    cout << area;


}