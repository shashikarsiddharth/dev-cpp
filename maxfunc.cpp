// finding maximum of two numbers using functions

#include <iostream>
using namespace std;

 
int maxinum(int a, int b)
{
    int res = 0;
    res = (a >= b) ? a: b;
    return res;
}

int main()
{
    int a, b;
    cout << "Enter two numbers\n";
    cin >> a >> b;

    cout << maxinum(a,b) << endl;  

    return 0;
}
