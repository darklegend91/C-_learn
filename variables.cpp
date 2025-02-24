#include <iostream>

int main()
{
    //Variables
    int x;
    x=45; // var_type var_name = value;
    double d=19.99;
    float f=45.254897845415212;
    char c= 'A';
    std::string s= "This is a string.";
    bool b = true; 
    const int c1=456;


    std::cout << "Value of integer x is " << x << std::endl ;
    std::cout << "Value of float f is " << f << std::endl ;
    std::cout << "Value of double d is " << d<< std::endl ;
    std::cout << "Value of char c is " << c << std::endl ;
    std::cout << "Value of string s is --> " << s<< std::endl ;
    std::cout << "Value of boolean b is " << b ;
    std::cout << "Value of constant integer c is " << c1 ;

    return 0;

}