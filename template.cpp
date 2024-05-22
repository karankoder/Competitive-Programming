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
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define nl endl
#define pb push_back
#define eb emplace_back
#define f first
#define s second

bool cmpa(pair<ll, ll> a, pair<ll, ll> b);
ll factorial(ll n);
bool isPrime(ll n);
void primefactors(ll t, map<ll, ll> &m);
int mex(vector<int> arr, int N);
ll modInverse(ll a, ll m);
ll power(ll x, ll y, ll M);

int main()
{
	clock_t tStart = clock();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		cout << "Karan" << endl;
	}
	return 0;
}
// 5432121255555555

//Important functions-

bool cmpa(pair<ll, ll> a, pair<ll, ll> b)
{
	if (a.first != b.first)
	{
		return a.first < b.first;
	}
	else
	{
		return a.second > b.second;
	}
}
ll factorial(ll n)
{
	ll ans = 1;
	for (int i = 1; i <= n; i++)
	{
		ans = (ans * i);
	}
	return ans;
}
bool isPrime(ll n)
{
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
int mex(vector<int> arr, int N)
{

	sort(arr.begin(), arr.end());

	int mex = 0;
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
