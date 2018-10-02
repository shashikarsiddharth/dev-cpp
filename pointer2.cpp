// Pointer along with arrays in cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;
    int i = 0;

    for (i = 0; i < 4; i++)
        cout << *ptr++ << endl;
    
    // Another method of doing the same

    /*
        for (i = 0; i < 4; i++)
            cout << ptr[i] << endl;
    */
    return 0;
}
