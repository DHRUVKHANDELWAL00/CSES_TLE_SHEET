#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        map<int, int> mp;
        for (int i = 0; i < k; i++)
        {
            if (i != x)
            {
                mp[i] = 1;
            }
        }
        if (mp.size() == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        if (mp.size() == 1 && x == 1)
        {
            if (n % k == 0)
            {
                cout << "YES" << endl;
                cout << n / k << endl;
                while (n != 0)
                {
                    cout << k << " ";
                    n /= k;
                }
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
    }
}