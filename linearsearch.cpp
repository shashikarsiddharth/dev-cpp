// Linear Search in cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {10,13,41,14,35};
    int i = 0, key = 0;

    cin >> key;
    
    for (i=0; i<5; i++)
    {
        if(a[i] == key)
        {    
            cout << i << endl;
            return 0;
        }
    }
    
    cout << "-1" << endl;
    return 0;
}