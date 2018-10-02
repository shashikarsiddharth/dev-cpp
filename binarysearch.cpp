// Binary Search in cpp
// NOTE: B.S only works if the array is sorted!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {10,13,41,14,35};
    int key = 0, spos = 0, epos = 4, mid = 0;
    
    sort(a,a+5);
    cin >> key;
    
    while(spos <= epos)
    {
        mid = (spos + epos) / 2;
        if(a[mid] == key)
        {
            cout << mid << endl;
            return 0;
        }
        else if(a[mid] <= key)
            spos = mid + 1;

        else
            epos = mid - 1;
    }
    
    cout << "-1" << endl;
    return 0;
}