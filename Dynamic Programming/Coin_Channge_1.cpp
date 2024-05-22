/***************************
 *  author:  karan_iitbhu  *
****************************/
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef vector<pair<ll, ll>> vpll;
#define printvec(vec) {for(int i=0;i<vec.size();i++) cout<<vec[i]<<" "; cout<<endl;}
#define inputvec(vec,n) for(int i=0;i<n;i++){ int x; cin>>x; vec.pb(x);};
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define nl endl
#define pb push_back
#define eb emplace_back
#define f first
#define s second
using VI = vector<int>;
#define FOR(i, a, b) for (int i = a; i < b; i++)

bool cmpa(pair<ll, ll> a, pair<ll, ll> b);
ll factorial(ll n);
bool isPrime(ll n);
void primefactors(ll t, map<ll, ll> &m);
ll mex(vector<ll> arr, ll N);
ll modInverse(ll a, ll m);
ll power(ll x, ll y, ll M);
ll maxll(ll a, ll b);
ll minll(ll a, ll b);
const int N = 1e5 + 10;
int dp[10010];
int func(int amount, vector<int>& coins) {
	if (amount == 0) return 0;
	if (dp[amount] != -1) return dp[amount];
	int ans = INT_MAX;
	for (int i = 0; i < coins.size(); i++) {
		if (amount - coins[i] >= 0)
			ans = min(ans, func(amount - coins[i], coins) + 1);
	}
	return dp[amount] = ans;
}
int coinChange(vector<int>& coins, int amount) {
	int ans = func(amount, coins);
	return (ans == INT_MAX ? -1 : ans);
}

int main()
{
	clock_t tStart = clock();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	memset(dp, -1, sizeof(dp));
	int n, amount;
	cin >> n >> amount;
	vector<int>coins;
	inputvec(coins, n);
	int ans = coinChange(coins, amount);
	cout << ans << endl;
	return 0;
}
ll maxll(ll a, ll b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}
ll minll(ll a, ll b)
{
	if (a > b)
	{
		return b;
	}
	return a;
}
bool isPrime(ll n)
{
	if (n == 2)
		return true;
	if (n <= 1)
		return false;
	for (ll i = 2; i < sqrt(n) + 1; i++)
		if (n % i == 0)
			return false;
	return true;
}
void primefactors(ll t, map<ll, ll> &m)
{
	while (t % 2 == 0)
	{
		m[2]++;
		t = t / 2;
	}
	for (int i = 3; i <= sqrt(t); i = i + 2)
	{
		while (t % i == 0)
		{
			m[i]++;
			t = t / i;
		}
	}
	if (t > 2)
	{
		m[t]++;
	}
}
ll factorial(ll n)
{
	ll res = 1, i;
	for (i = 2; i <= n; i++)
		res *= i;
	return res;
}
ll mex(vector<ll> arr, ll N)
{

	sort(arr.begin(), arr.end());

	ll mex = 0;
	for (int idx = 0; idx < N; idx++)
	{
		if (arr[idx] == mex)
		{
			mex += 1;
		}
	}
	return mex;
}
ll modInverse(ll a, ll m)
{
	return power(a, m - 2, m);
}

ll power(ll x, ll y, ll M)
{
	if (y == 0)
		return 1;

	ll p = power(x, y / 2, M) % M;
	p = (p * p) % M;

	return (y % 2 == 0) ? p : (x * p) % M;
}