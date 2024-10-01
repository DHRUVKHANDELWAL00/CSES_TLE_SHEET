#include <bits/stdc++.h>
using namespace std;
long long power(int a, int n)
{
    int res = 1;
    while (n != 0)
    {
        if (n % 2)
        {
            res *= a;
            n--;
        }
        else
        {
            a *= a;
            n /= 2;
        }
    }
}
int main()
{
    // pow(2,18);
    long long ans = power(2, 18);
    cout << ans << endl;
}