#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>


int main(){

    double x, y;
    std::cout << "Please enter the coordinates: ";
    std::cin >> x >> y;
    double XY = sqrt( x * x + y * y ); // The distance of the point from the origin of the coordinate


    /*
    the radius of the smaller circle is 5.
    the radius of the large circle is 10.
    1. For the point to be within the hatched area, the variable XY must be located between these radii.
    2. For the point to be outside the hatched area, the XY variable must be less than 5 or greater than 10.
    3. For the point to be on the boundary of the hatched area, the variable XY must be equal to one of these radii.
    */


    if ( y >= 0 ){
        if ( XY > 5 && XY < 10 ){ // 1. probability
        std::cout << "The point is inside. XY = ";
        }
        else if ( XY == 5 || XY == 10 ){ // 2. probability
            std::cout << "The point is on the border. XY = ";
        }
        else{ // 3. probability
            std::cout << "The point is outside. XY = ";
        } 
        std::cout << std::fixed << std::setprecision(2) << XY;
    }
    
    else{
        std::cout << "The point is outside. Because y is negative.\nThe figure is located only in the 1st and 2nd quarters.";
    }
}
