#include <bits/stdc++.h>
using namespace std;

const int MOD = 2 * 1e5;

int main()
{
    int t;
    cin >> t;
    vector<vector<int>> vec = {{1, 2, 9, 10, 25}, {4, 3, 8, 11, 24}, {5, 6, 7, 12, 23}, {16, 15, 14, 13, 22}, {17, 18, 19, 20, 21}};
    while (t--)
    {
        int x, y;
        cin >> y >> x;
        cout << vec[y - 1][x - 1] << endl;
    }
}
