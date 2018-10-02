// Strings in cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s("Hello World");
    string j(" I'm Joey");

    cout << s << endl;
    cout << s.length() << endl;
    cout << s.at(2) << endl;
    cout << s.append(j) << endl;

    string subs(s.substr(2));
    cout << subs << endl;

    string subs2(s.substr(2,5));
    cout << subs2 << endl;

    string n("Hello Again");

    int x = n.find("Again");
    cout << x << endl;
    cout << n.replace(x,5,"Joey") << endl;

    return 0;
}