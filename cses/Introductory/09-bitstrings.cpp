#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

// long long power(long long base, long long exp, long long mod)
// {
//     long long result = 1;
//     while (exp > 0)
//     {
//         if (exp % 2 == 1)
//         {
//             result = (result * base) % mod;
//         }
//         base = (base * base) % mod;
//         exp /= 2;
//     }
//     return result;
// }
long long factorial(int n, vector<long long> &dp)
{
    if (n == 1)
    {
        return 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    else
    {
        return dp[n] = factorial(n - 1, dp) * n;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<long long> dp(n + 1, -1);
    factorial(n, dp);
    cout
        << dp[n] << endl;
    return 0;
}
