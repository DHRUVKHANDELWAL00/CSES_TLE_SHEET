#include <bits/stdc++.h>
#define P 1000000001
using namespace std;
int arr[1000001];
long long power(int a, int n)
{
    int res = 1;
    while (n != 0)
    {
        if (n % 2)
        {
            res *= (a * 1LL);
            n--;
        }
        else
        {
            a *= (a * 1LL);
            n /= 2;
        }
    }
    return res;
}
long long Cnf(int n, int k)
{
    if (k > n)
    {
        return 0;
    }
    int res = arr[n];
    res *= power(arr[k], P - 2) % P;
    res *= power(arr[n - k], P - 2) % P;
    return res;
}
int main()
{
    arr[0] = 1;
    arr[1] = 1;
    for (int i = 2; i < 1000000; i++)
    {
        arr[i] = (i * arr[i - 1] * 1LL) % P;
    }

    int q;
    int n, k;
    cin >> q;
    while (q--)
    {
        cin >> n >> k;
        cout << Cnf(n, k) << endl;
    }
}
