// if-elseif statements

#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    if(num < 10)
        cout << "Number is less than 10\n";
    else if(num == 10)
        cout << "Number equals 10\n";
    else
        cout << "Number greater than 10\n";
    
    return 0;
}
