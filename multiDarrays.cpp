// 2-D and 3-D arrays in cpp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int twoDarr[3][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10}};
    int threeDarr[2][3][4] = {
        {{1,2,3,4},{5,6,7,8},{9,10,11,12}},
        {{13,14,15,16},{17,18,19,20},{21,22,23,24}}
    };

    for (int i = 0; i< 3; i++)
    {
        for (int j = 0; j< 4; j++)
        {
            cout << twoDarr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            for (int c = 0; c < 4; c++)
                cout << threeDarr[a][b][c] << " ";

            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
