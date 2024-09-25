#include <bits/stdc++.h>
using namespace std;

const int MOD = 2 * 1e5;

int main()
{
    long long int n;
    cin >> n;
    vector<int> vec(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; i < n; i++)
    {
        vec.push_back(i + 1);
    }
    int xr = 0;
    for (long long int i = 0; i < vec.size(); i++)
    {
        xr ^= vec[i];
    }
    cout << xr << endl;
    // long long int s = (n * (n + 1)) / 2;
    // s %= MOD;
    // long long sum = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     sum += vec[i];
    // }
    // sum %= MOD;
    // cout << s - sum << endl;
}
