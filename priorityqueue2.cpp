// Priority Qufeue using STL in Cpp
// Priority Queue has a property that the first element is always the largest

#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue <int> s;
    s.push(120);
    s.push(12110);
    s.push(121240);
    s.push(12120);
    s.push(12);
    s.push(1241);

    while(!s.empty())
    {
        cout << "Top: " << s.top() << endl;
        s.pop();
    }
    
    return 0;
}