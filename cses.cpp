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
#define pb push_back
#define printvec(vec) {for(int i=0;i<vec.size();i++) cout<<vec[i]<<" "; cout<<endl;}
#define inputvec(vec,n) for(int i=0;i<n;i++){ ll ab; cin>>ab; vec.pb(ab);};
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define maxe(v) *max_element(v.begin(),v.end())
#define mine(v) *min_element(v.begin(),v.end())
#define eb emplace_back
#define f first
#define s second
#define nl "\n"

bool cmpa(pair<ll, ll> a, pair<ll, ll> b);
bool isPrime(ll n);
void primefactors(ll t, map<ll, ll> &m);
void printBinary(ll a, vector<ll>&v);
void imp(void);
ll mex(vector<ll> arr, ll N);
ll modInverse(ll a, ll m);
ll multiply(ll x, ll y);
ll power(ll x, ll y);
const ll M = 1e8;
const ll N = 2e5 + 10;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<int>v;
	inputvec(v, m);
	if (mine(v) == 1 or maxe(v) == n) cout << -1 << endl;
	else {
		vector<int>ans;
		int min = mine(v);
		int mx = maxe(v);
		for (int i = 1; i < min; i++) ans.pb(i);
		for (int i = min + 1; i <= mx + 1; i++) ans.pb(i);
		ans.pb(min);
		for (int i = mx + 2; i <= n; i++) ans.pb(i);
		printvec(ans);
	}
	return 0;
}

void imp(void) {
	// 5th bit is unset in capital letters and set in small letters.
	// coversion from cap to small -> char('C' | ' ')
	// conversion from small to cap -> char('c' & '_')
	// swapping the number -> a = a ^ b , b = b ^ a, a = a ^ b
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
void printBinary(ll a, vector<ll>&v) {
	for (ll i = 63; i >= 0; i--) {
		v.pb(((a & (1ll << i)) ? 1 : 0));
	}
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
	return power(a, m - 2);
}
ll multiply(ll x, ll y) {
	ll ans = 0;
	while (y) {
		if (y & 1) {
			ans = (ans + x) % M;
		}
		x = (x + x) % M;
		y = y >> 1;
	}
	return ans;
}
ll power(ll x, ll y)
{
	// if x is very large then we can use then we can just take x=x%M at the starting
	ll ans = 1;
	while (y) {
		if (y & 1) {
			ans = (ans * x) % M;
		}
		x = (x * x) % M;
		y = y >> 1;
	}
	return ans;
}