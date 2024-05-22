int t;
cin >> t;
while (t--)
{
	int n;
	cin >> n;
	string s[2];
	cin >> s[0] >> s[1];

	int dp[2][n];
	int pos = n;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[0][i] == '0')
		{
			pos = i;
		}
		dp[0][i] = pos;
	}
	pos = n;
	for (int i = n - 1; i >= 0; i--)
	{
		if (s[1][i] == '0')
		{
			pos = i;
		}
		dp[1][i] = pos;
	}

	string ans = "";
	pos = 0;
	for (int i = 0; i < n; i++)
	{
		ans.push_back(s[pos][i]);
		if (i == n - 1)
		{
			if (pos == 0)
			{
				ans.push_back(s[1][i]);
			}
			else
			{
				break;
			}

		}
		if (pos == 0)
		{
			if (dp[0][i + 1] > dp[1][i] + 1)
			{
				pos = 1;
				i--;
			}
		}
	}
	vector<int> hue(n, 0);
	for (int i = n; i >= 1; i--)
	{
		if (ans[i] == s[1][i - 1])
		{
			hue[i - 1] = 1;
		}
		else
		{
			break;
		}
	}
	int val = 0;
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		if (ans[i] == s[0][i])
		{
			flag = true;
			if (hue[i])
			{
				val++;
			}

		}
		else if (flag)
		{
			break;
		}
	}
	cout << ans << endl << val << endl;
}