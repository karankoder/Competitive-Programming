#include<bits/stdc++.h>
using namespace std;

#define check ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int main()
{
	// check;
	int N;
	cin >> N;
	while (N--)
	{
		int n;
		cin >> n;
		string a, b;
		cin >> a >> b;
		int count1 = 0;
		int count2 = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == b[i])
				++count1;
			else
				++count2;
		}
		if (count1 == n || count2 == n)
		{
			cout << "YES" << "\n";
			vector<pair<int, int>> v;
			int onecount = 0;
			for (int i = 0; i < n; i++)
			{
				if (a[i] == '1')
				{
					++onecount;
					v.push_back({i + 1, i + 1});
				}
			}
			if ((count2 == 0 && onecount % 2 == 1) || (count2 == n && onecount % 2 == 0))
			{
				v.push_back({1, n});
				v.push_back({2, n});
				v.push_back({1, 1});
			}
			cout << v.size() << "\n";
			for (int i = 0; i < v.size(); i++)
			{
				cout << v[i].first << " " << v[i].second << "\n";
			}
		}
		else
			cout << "NO" << "\n";
	}
}