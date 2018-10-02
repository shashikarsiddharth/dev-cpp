// Stacks using STL in Cpp, Stack works on LIFO (Last In First Out) concept

#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout << "Size of the stack is: " << s.size() << endl;
    cout << "Top most element of the stack is: " << s.top() << endl;
    return 0;
}