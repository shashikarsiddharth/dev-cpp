/**
 * Assignent Operators are used for comparisions few of them are { += , -= , *= , /= , = }
 * 
**/

#include <iostream>
using namespace std;

int main()
{
    int a = 1, b;
    
    b = a;
    cout << (a += b) << endl;
    cout << (a -= b) << endl;
    cout << (a /= b) << endl;
    cout << (a *= b) << endl;
    
    return 0;
}
