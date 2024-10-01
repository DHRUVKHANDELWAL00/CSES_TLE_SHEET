#include <bits/stdc++.h>

using namespace std;
int interative_gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    if (a > b)
    {
        return interative_gcd(b, a - b);
    }
    else
    {
        return interative_gcd(a, b - a);
    }
}
int gcd1(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd1(b, a % b);
    }
}
int main()
{
    int g = gcd1(40, 12);
    int h = interative_gcd(40, 12);
    cout
        << h << endl;
}