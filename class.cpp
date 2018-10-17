#include <bits/stdc++.h>
using namespace std;

class Abc
{
    int date;

    public:
        void getDate()
        {
            cin >> date;
        }

        void displayDate()
        {
            cout << date << endl;
    }
};


int main()
{
    Abc obj;
    obj.getDate();
    obj.displayDate();

    int x = 2;
    cout << sizeof(x) << endl;
    cout << sizeof x << endl;
    return 0;
}