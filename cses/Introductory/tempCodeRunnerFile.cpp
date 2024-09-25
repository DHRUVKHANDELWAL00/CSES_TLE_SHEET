#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> vec[i];
    }
    long long int s = (n * (n + 1)) / 2;
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += vec[i];
    }
    cout << s - sum << endl;
}
