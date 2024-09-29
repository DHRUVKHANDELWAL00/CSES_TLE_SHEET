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
        vector<int> vec(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> vec[i];
        }
        // int pcnt = 0;
        // int ncnt = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (vec[i] >= 0)
        //     {
        //         pcnt++;
        //     }
        //     else
        //     {
        //         ncnt++;
        //     }
        // }
        long long sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += vec[i];
        }
        long long x = 0 - sum;
        cout << x << endl;
    }
}