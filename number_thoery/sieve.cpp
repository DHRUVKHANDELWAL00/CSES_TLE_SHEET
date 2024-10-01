#include <bits/stdc++.h>
using namespace std;
int arr[1001];
void sieve()
{
    int maxN = 1000;
    for (int i = 0; i <= 1000; i++)
    {
        arr[i] = 1;
    }
    arr[0] = 0;
    arr[1] = 0;
    for (int i = 2; i * i <= maxN; i++)
    {
        if (arr[i])
        {
            for (int j = i * i; j <= maxN; j += i)
            {
                arr[j] = 0;
            }
        }
    }
}
int main()
{
    sieve();
    for (int i = 2; i <= 1000; i++)
    {
        if (arr[i])
        {
            cout << i << " ";
        }
    }
}