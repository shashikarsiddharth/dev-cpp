// Sample example of pass by value and pass by reference

#include <iostream>
using namespace std;

void passByValue(int n)
{
    n *= 2;
}

void passByRef(int &n)
{
    n *= 3;
}

int main(int argc, char const *argv[])
{
    int n = 10;
    cout << "Original value of n: " << n << "\n";

    passByValue(n);
    cout << "Result after pass-by-value: " << n << "\n";
    
    passByRef(n);
    cout << "Result after pass-by-reference: " << n << "\n";
    return 0;
}
