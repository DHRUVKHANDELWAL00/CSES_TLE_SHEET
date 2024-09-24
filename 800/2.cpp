#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		vector<int> vec(n);
		for (int i = 0; i < n; i++)
		{
			cin >> vec[i];
		}
		vector<int> temp;
		temp.push_back(vec[0] - 0);
		temp.push_back(2 * (x - vec[vec.size() - 1]));
		for (int i = vec.size() - 2; i >= 0; i--)
		{
			temp.push_back(vec[i + 1] - vec[i]);
		}
		sort(vec.begin(), vec.end());
		int mini = INT_MIN;
		for (int i = 0; i < temp.size(); i++)
		{
			mini = max(mini, temp[i]);
		}
		cout << mini << endl;
	}
}
