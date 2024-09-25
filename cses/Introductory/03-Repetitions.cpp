#include <bits/stdc++.h>
using namespace std;

const int MOD = 2 * 1e5;

int main()
{
    string s;
    cin >> s;
    int maxi = INT_MIN;
    int cnt = 1;
    for (int i = 0; i < s.length(); i++)
    {
        cnt = 1;
        while (s[i] == s[i + 1])
        {
            i++;
            cnt++;
        }
        maxi = max(maxi, cnt);
    }
    cout << maxi << endl;
}
