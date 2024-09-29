#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> b;
        vector<int> c;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] % 2 != 0)
            {
                b.push_back(a[i]);
            }
            else
            {
                c.push_back(a[i]);
            }
        }
        int maxi = INT_MIN;
        if (b.size() == 0)
        {
            for (int i = 0; i < a.size(); i++)
            {
                maxi = max(maxi, a[i]);
            }
            while (c[c.size() - 1] == maxi)
            {
                c.pop_back();
                b.push_back(maxi);
            }
        }
        else if (c.size() == 0)
        {
            for (int i = 0; i < a.size(); i++)
            {
                maxi = max(maxi, a[i]);
            }
            while (b[b.size() - 1] == maxi)
            {
                b.pop_back();
                c.push_back(maxi);
            }
        }
        bool flag = 0;
        for (int i = 0; i < b.size(); i++)
        {
            for (int j = 0; j < c.size(); j++)
            {
                if (b[i] % c[j] == 0)
                {
                    cout << "-1" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            continue;
        }
        cout << b.size() << " " << c.size() << "\n";
        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < c.size(); i++)
        {
            cout << c[i] << " ";
        }
        cout << "\n";
    }
}