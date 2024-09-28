#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<bool> vis(n, 0);
    vector<int> app(m);
    for (int i = 0; i < m; i++)
    {
        cin >> app[i];
    }
    sort(vec.begin(), vec.end());
    sort(app.begin(), app.end());
    int cnt = 0;
    for (int i = 0; i < app.size(); i++)
    {
        bool flag = false;
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] - k > app[i])
            {
                break;
            }
            else if (vec[j] - k <= app[i] && vec[j] + k >= app[i] && vis[j] != 1)
            {
                cnt++;
                vis[j] = 1;
                break;
            }
        }
    }
    cout << cnt << endl;
}