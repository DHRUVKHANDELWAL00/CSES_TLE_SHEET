#include <bits/stdc++.h>
using namespace std;
int score(int i, int j)
{
    if (i == 0 || i == 9 || j == 0 || j == 9)
    {
        return 1;
    }
    else if ((i == 1 && j != 0 && j != 9) || (i == 8 && j != 0 && j != 9) || (j == 1 && i != 0 && i != 9) || (j == 8 && i != 0 && i != 9))
    {
        return 2;
    }
    else if ((i == 2 && j >= 2 && j <= 7) || (i == 7 && j >= 2 && j <= 7) || (j == 2 && i >= 2 && i <= 7) || (j == 7 && i >= 2 && i <= 7))
    {
        return 3;
    }
    else if ((i == 3 && j >= 3 && j <= 6) || (i == 6 && j >= 3 && j <= 6) || (j == 3 && i >= 3 && i <= 6) || (j == 6 && i >= 3 && i <= 6))
    {
        return 4;
    }
    else if ((i == 4 && (j == 5 || j == 4)) || (i == 5 && (j == 5 || j == 4)))
    {
        return 5;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        vector<string> vec(10);
        for (int i = 0; i < 10; i++)
        {
            cin >> vec[i];
        }
        long long sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (vec[i][j] == 'X')
                {
                    sum += score(i, j);
                }
            }
        }
        cout << sum << endl;
    }
}