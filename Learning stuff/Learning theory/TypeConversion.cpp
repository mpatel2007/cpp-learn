#include <iostream>
int main()
{
    double x=(int) 9.7; 
    std::cout<<x<<std::endl; //prints 9
    char c=100; //implicit conv from int to char
    std::cout<<c<<std::endl; //prints d
    int a=9;
    int b=2;
    double score=a/b *100;
    std::cout<<score<<std::endl; //prints 400.0
    score= (double)a/b *100; //explicit conv from int to double
    std::cout<<score<<std::endl; //prints 450.0
}