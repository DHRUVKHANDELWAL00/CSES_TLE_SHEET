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
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == 0)
        {
            cout << "0" << endl;
            return 0;
        }
    }
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (vec[i] > 0)
        {
            mini = min(mini, vec[i]);
        }
        else
        {
            vec[i] *= -1;
            mini = min(mini, vec[i]);
        }
    }

    cout << mini << endl;
}