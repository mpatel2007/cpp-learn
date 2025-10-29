#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::pow;
using std::sqrt;

int main()
{
    using std::pow;
    using std::sqrt;
    int s,b;
    cout<<"Enter the side length";
    std::cin>>s;
    cout<<"Enter the base length";
    std::cin>>b;
    double h;
    h=sqrt(pow(s,2)+pow(b,2));
    cout<<"The hypotenuse is: " << h;
}