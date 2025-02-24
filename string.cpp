#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s = "This is string 1";
    cout << s << endl;

    //Input using cin::
    cout << "Enter your string: ";
    cin >> s ;
    cout << s << endl;

    // Using getline::
    cout << "Enter your string: ";
    getline(cin,s);  //getline(cin_fxn , variable)
    cout << s << endl;
    cout << "Length of string entered is" << s.length() << endl; // consider space too can use size() too

    cout << "2nd eleemnt of string: "<< s[1]

    string greeting1 = "Hello";  // Regular String
    char greeting2[] = "Hello";  // C-Style String (an array of characters)
    return 0;
}