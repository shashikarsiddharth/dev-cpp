// Heaps in cpp using STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {40, 30, 25, 35, 15};
    int i = 0;
    
    // Converting a vector into a max heap
    make_heap(v.begin(),v.end());
    cout << "Maximun element of the heap is: " << v.front() << endl;
    cout << endl;

    // Printing all the elements of the heap 
    for(i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
    cout << endl;
    cout << endl;
    
    // Pushing or inserting elements in heap
    v.push_back(90);
    push_heap(v.begin(),v.end());
    
    cout << "After inserting an element\n";
    for(i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
    cout << endl;
    cout << endl;

    // Popping or deleting elements in heap
    pop_heap(v.begin(),v.end());

    cout << "After deleting an element\n";
    for(i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
    cout << endl;
    cout << endl;

    // Checking if the given elements are heap or not
    if (is_heap(v.begin(),v.end()))
        cout << "Yeah it's a heap\n";
    else
        cout << "Nope it's not a heap\n";
    
    // Checking until which position its a heap
    vector <int> :: iterator itr1;   
    vector <int> :: iterator itr = is_heap_until(v.begin(),v.end());
    cout << "Heap is until: " ; 
    for (itr1 = v.begin(); itr1 != itr; itr1++)
        cout << *itr1 << " ";

    cout << endl;
    cout << endl; 


    // Sorting the heaps
    sort_heap(v.begin(),v.end());
    cout << "Sorting the element\n";
    for(i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
    cout << endl;


    return 0;
}