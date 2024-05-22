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
const ll M = 3e5 + 7;
const ll N = 1e9 + 7;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int tc;
	cin >> tc;
	while (tc--)
	{
		ll n, k;
		cin >> n >> k;
		vector<ll>v;
		inputvec(v, n);
		if (tc == 9785) {
			cout << n << k << v[0] << v[1] << v[2] << v[3] << endl;
		}
		for (ll i = 0; i < k; i++) {
			ll temp = LLONG_MIN	;
			for (ll j = 0; j < n - 1; j++) {
				temp = max(temp, abs(v[j + 1] - v[j]));
			}
			vector < vector<ll>>vp;
			for (ll j = 0; j < n - 1; j++) {
				int cnt = 0;
				int num = j;
				while (j < n - 1 and v[j] - v[j + 1] == temp) {
					j++;
					cnt++;
				}
				if (num != j)
					vp.pb({cnt, j - 1, 0});
				num = j;
				cnt = 0;
				while (j < n - 1 and v[j + 1] - v[j] == temp) {
					j++;
					cnt++;
				}
				if (num != j) j--, vp.pb({cnt, num, 1});
			}
			if (!vp.empty()) {
				sort(all(vp));
				reverse(all(vp));
				if (v[vp[0][1]] >= v[vp[0][1] + 1]) v[vp[0][1]] = v[vp[0][1] + 1];
				else  v[vp[0][1] + 1] = v[vp[0][1]];
			}
			// printvec(v);
		}
		ll ans = accumulate(all(v), 0);
		cout << ans << endl;
	}
	return 0;
}
void imp(void) {
	// 5th bit is unset in cvpital letters and set in small letters.
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
	for (ll i = 3; i <= sqrt(t); i = i + 2)
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