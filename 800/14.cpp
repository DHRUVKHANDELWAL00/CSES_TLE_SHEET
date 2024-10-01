#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool flag;     // a lost
        bool turn = 0; // a
        while (true)
        {
            if (turn == 0 && a == 0 && c == 0)
            {
                flag = 0;

                break;
            }
            else if (turn == 1 && b == 0 && c == 0)
            {
                flag = 1; // b lost
                break;
            }
            if (!turn)
            {
                if (a > 0)
                {
                    a -= 1;
                    turn = 1;
                    continue;
                }
                else if (a == 0 && c > 0)
                {
                    c -= 1;
                    turn = 1;
                    continue;
                }
            }
            else
            {
                if (b > 0)
                {
                    b -= 1;
                    turn = 0;
                    continue;
                }
                else if (b == 0 && c > 0)
                {
                    c -= 1;
                    turn = 0;
                    continue;
                }
            }
        }
        if (flag == 1)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
}