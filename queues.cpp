// Queue using STL in Cpp, Queue works on FIFO (First In First Out) concept

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue <int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Size of the Queue is: " << s.size() << endl;
    cout << "First element is: " << s.front() << endl;
    cout << "Last element is: " << s.back() << endl;

    while(!s.empty())
    {
        cout << s.front() << endl;
        s.pop();
    }

    return 0;
}