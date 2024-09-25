#include <bits/stdc++.h>
using namespace std;

const int MOD = 2 * 1e5;

int main()
{
    int n;
    cin >> n;
    vector<long long int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    long long int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (vec[i] < vec[i - 1])
        {
            cnt += (vec[i - 1] - vec[i]);
            vec[i] = vec[i - 1];
        }
    }
    cout << cnt << endl;
}
