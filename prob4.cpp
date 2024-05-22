/*
Kshitij Sharma
github: meetthehorizon
   /\_/\
  (= ._.)
  / >  \>
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define INF 10000000000000000
#define FOR(i, n) for (size_t i = 0; (i) < (n); (i)++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void solve(int);
bool test_cases = true;
template <typename T> T next() { T x; cin >> x; return x; }

signed main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1; if (test_cases) cin >> t;
	for (size_t i = 1; i <= t; i++)
		solve(i);
	return 0;
}


void check(vector<int> vec, int n2, int k) {
	set<int> s;
	int n = vec.size();
	for (int mask = 0; mask < (1 << n); ++mask) {
		int x = 0;
		for (int bit = 0; bit < n; ++bit) {
			if ((1 << bit)&mask) x += vec[bit];
		}
		s.insert(x);
	}


	for (auto &v : s) if (v <= n2) cout << v << ' '; cout << '\n';
}

void solve(int t)
{
	// CHILL BRO
	// I ASSUME YOU ARE HERE BECAUSE YOU HAVE A COMPLETE ALGORITHIM?
	int n, k; cin >> n >> k;
	vector<int> vec(25);

	int bit = 0, mx = 0;
	while ((mx | (1 << bit)) < k) {
		vec[bit] = 1 << bit;
		mx |= (1 << bit);
		bit++;
	}

	vec[bit++] = k - mx - 1;
	mx = k - 1;

	vec[bit++] = k + 1;
	mx = k << 1;

	bool flag = true;
	while (mx < n) {
		vec[bit++] = mx + 1;
		mx = 2 * mx + 1;
	}

	vec.back() = 3 * k + 1;
	cout << "25\n";
	// check(vec, n, k);
	for (auto &v : vec) cout << v << ' '; cout << '\n';
}