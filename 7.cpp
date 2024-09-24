#include <bits/stdc++.h>
using namespace std;
bool present(string a, string b)
{
	size_t pos = a.find(b);
	if (pos == string::npos)
	{
		return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		string x;
		cin >> x;
		string s;
		cin >> s;
		bool flag = 0;
		bool f = 0;
		int cnt = 0;
		while (flag != 1)
		{
			flag = present(x, s);
			// cout << flag << endl;
			if (x.length() > s.length() * 2)
			{
				cout << "-1" << endl;
				f = 1;
				break;
			}
			if (flag == 0)
			{
				x += x;
				cnt++;
			}
		}
		if (f == 1)
		{
			continue;
		}
		cout << cnt << endl;
	}
}
