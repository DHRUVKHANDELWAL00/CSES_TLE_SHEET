#include <bits/stdc++.h>
using namespace std;

const int MOD = 2 * 1e5;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    if (n == 1)
    {
        cout << "1" << endl;
    }
    else if (n <= 3 && n != 1)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " ";
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << " ";
            }
        }
        // for (int i = 0; i < vec.size(); i++)
        // {
        //     cout << vec[i] << " ";
        // }
    }

    return 0;
}
