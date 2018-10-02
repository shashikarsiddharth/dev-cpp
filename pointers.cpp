// Pointers in cpp 

/**FUN FACT: Pointer have same size no matter what the data types.**/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;

    cout << "Value of x is: " << x << endl;
    cout << "Another way of accessing the value of x: " << *ptr << endl; 
    cout << "Address of x is: " << ptr << endl;


    // Just verifying the fun fact // 
    int *ptr1;
    char *ptr2;
    float *ptr3;

    cout << sizeof(ptr1) << endl;
    cout << sizeof(ptr2) << endl;
    cout << sizeof(ptr3) << endl;
    return 0;
}