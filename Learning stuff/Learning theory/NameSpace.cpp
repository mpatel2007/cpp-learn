#include <iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}
int main()
{
    using std::cout;//to avoid writing std::cout
    using namespace first;  //to avoid writing first
    cout <<x;
    //Namespace= provides a way to group related code together
    //helps to avoid name conflicts in larger projects
} 


