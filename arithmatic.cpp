/** 
 * Generally there are two types of arithmatic operators in cpp
 * 1. Unary Operators are ++ , --
 * 2. Binary Operators are + , - , / , % , *
**/

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 3;

    // Binary Operations
    cout << "Addition " << a + b << endl;
    cout << "Subtraction " << a - b << endl;
    cout << "Division " << a / b << endl;
    cout << "Multiplication " << a * b << endl;
    cout << "Modulus " << a % b << endl;
    
    // Unary Operations
    cout << "Value of a is: " << a << endl; 
    cout << "a++ " << a++ << endl;
    cout << "++a " << ++a << endl;
    cout << "a-- " << a-- << endl;
    cout << "--a " << --a << endl;
    
    return 0;
}