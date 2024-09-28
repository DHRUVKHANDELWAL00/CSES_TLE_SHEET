#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[vec[i]]++;
    }
    cout << mp.size() << endl;
}