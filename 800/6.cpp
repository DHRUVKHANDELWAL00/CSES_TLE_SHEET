#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++)
		{
			cin >> vec[i];
		}
		sort(vec.begin(), vec.end());
		vector<int> arr;
		int i = 0;
		int j = vec.size() - 1;
		while (i < j)
		{
			arr.push_back(vec[i]);
			arr.push_back(vec[j]);
			i++;
			j--;
		}
		if (i == j)
		{
			arr.push_back(vec[i]);
		}
		bool flag = 0;
		long long s = arr[0] + arr[1];
		for (int i = 2; i < arr.size(); i++)
		{
			if (arr[i] + arr[i - 1] != s)
			{
				flag = 1;
				break;
			}
		}
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i] << " ";
		}
		if (flag == 0)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
