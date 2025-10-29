#include <iostream>
int main()
{
    int a=10;
    a++; //a=a+1, a=11
    std::cout<<a<<std::endl;
    a--; //a=a-1, a=10
    std::cout<<a<<std::endl;
    a+=1; //a=a+1, a=11
    a*=2; //a=a*2, a=22     
    a/=2; //a=a/2, a=11
    std::cout<<a<<std::endl;
    a%=3; //a=a%3, a=2  
    std::cout<<a<<std::endl;
}