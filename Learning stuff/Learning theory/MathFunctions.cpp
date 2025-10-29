#include <iostream>
#include <cmath> //for math functions
using std::endl;
int main()
{
    double x=3;
    double y=4;
    double z;
    z=std::max(x,y); //max function returns the larger of two values
    std::cout<<z<<endl; //prints 4
    z=std::min(x,y); //min function returns the smaller of two values
    std::cout<<z<<endl; //prints 3
    z=std::abs(-x); //abs function returns the absolute value   
    std::cout<<z<<endl; //prints 3
    z=sqrt(y); //sqrt function returns the square root
    std::cout<<z<<endl; //prints 2
    z=std::pow(x,y); //pow function returns x raised to the power of y
    std::cout<<z<<endl; //prints 81 (3^4=81)
    z=std::round(2.6); //round function rounds to nearest integer
    std::cout<<z<<endl; //prints 3
    z=std::ceil(2.1); //ceil function rounds up to next integer
    std::cout<<z<<endl; //prints 3
    z=std::floor(2.9); //floor function rounds down to previous integer
    std::cout<<z<<endl; //prints 2
}