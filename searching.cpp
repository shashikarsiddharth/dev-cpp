// Binary Searching in Cpp using STL (Standard Template Library)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {10,13,41,14,35};
    int key = 0;
    
    sort(a,a+5);
    
    cin >> key;
    cout << binary_search(a,a+5,key) << endl;
    return 0;
}