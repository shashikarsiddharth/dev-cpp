// Sorting using STL (Standard Template Library)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {10,13,41,14,35};
    int i = 0;

    sort(a,a+5);
    
    for (i = 0; i < 5; i++)
        cout << a[i] << " ";

    cout << endl;
    return 0;
}