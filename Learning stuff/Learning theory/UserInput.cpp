#include <iostream>
using std::cout;

int main()
{
    std::string name;
    cout<<"Enter your age: ";
    int age;
    std::cin >> age;
    cout<<"Enter your name: ";
    //std::cin >> name; //reads input until first space
    std::getline(std::cin >> std::ws, name); //reads entire line including spaces
    //std::ws ignores any leading whitespace characters (like newline from previous input)
    cout<<"Hello, " << name << "!" << std::endl;
    cout << "You are " << age << " years old." << std::endl;    
}