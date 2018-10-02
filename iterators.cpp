// Iterators in cpp using STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int i = 0;

    for (i=0; i<5; i++)
        v.push_back(i+1);

    vector <int> :: iterator ptr;
    vector <int> :: iterator ftr; 

    for(ptr = v.begin(); ptr < v.end(); ptr++)
        cout << *ptr << " ";
    cout << endl;


    // advancing the iterator
    ptr = v.begin();
    advance(ptr,3);
    cout << *ptr << endl;

    // find next & prev using iterators
    ptr = v.begin();
    ftr = v.end();

    vector <int> :: iterator it = next(ptr);
    vector <int> :: iterator it1 = prev(ftr,2);

    cout << *it << endl;
    cout << *it1 << endl;

    
    return 0;
}
