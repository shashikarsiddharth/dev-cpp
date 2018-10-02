// Vectors in cpp using STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int i = 0;

    for (i = 0; i<5; i++)
        v.push_back(i+1);

    for (i=0; i<5; i++)
        cout << v[i] << endl;
    
    cout << "Maximun size of the vector: " << v.max_size() << endl;
    cout << "Capacity of the vector: " << v.capacity() << endl;
    cout << "Size of the vector: " <<v.size() << endl;

    if(v.empty())
        cout << "Vector is empty\n";
    else
        cout << "Vector is non-empty\n";

    cout << "First element of the vector: " << v.front() << endl;
    cout << "Last element of the vector: " << v.back() << endl;
    cout << "Element @ index 4: " << v.at(4) << endl;

    return 0;
}