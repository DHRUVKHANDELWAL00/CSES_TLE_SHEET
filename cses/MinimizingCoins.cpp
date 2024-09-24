#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int solve(int n, int x, vector<int> vec, int ind, vector<int> &dp)
{
    cout << "Entered" << endl;
    if (x == 0)
    {
        return 1;
    }
    if (ind < 0)
    {
        return INT_MAX;
    }
    if (x < 0)
    {
        return INT_MAX;
    }
    if (dp[x] != -1)
    {
        return dp[x];
    }
    int take = INT_MAX;
    if (vec[ind] < x)
    {
        take = solve(n, x - vec[ind], vec, ind, dp) + 1;
    }
    int notTake = solve(n, x, vec, ind - 1, dp) + 1;
    return dp[x] = min(take, notTake);
}

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<int> dp(x + 1, -1);
    cout << solve(n, x, vec, vec.size() - 1, dp) << endl;
    return 0;
}
