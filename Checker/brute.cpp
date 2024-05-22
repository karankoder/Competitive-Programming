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
const ll M = 3e5 + 10;
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
		ll n, q;
		cin >> n >> q;
		vector<ll>v;
		inputvec(v, n);
		multiset<ll>pos, neg;
		pos.insert(v[0]);
		vector<ll>an;
		an.pb(v[0]);
		ll ans = v[0];
		ll i = 1;
		while (1) {
			if (i + 1 >= n) break;
			ll pos1 = *(pos.begin()), neg1 = LLONG_MIN;
			if (!neg.empty()) {
				auto it = neg.end();
				it--;
				neg1 = *it;
			}
			ll mx = max(v[i], v[i + 1]), mn = min(v[i], v[i + 1]);
			if (mx > pos1 and mn > pos1) {
				ans += v[i];
				ans += v[i + 1];
				pos.erase(pos.begin());
				pos.insert(v[i]);
				pos.insert(v[i + 1]);
				ans -= 2 * (pos1);
				neg.insert(pos1);
			}
			else if (mx < neg1 and mn < neg1) {
				ans += 2 * (neg1);
				pos.insert(neg1);
				neg.erase(prev(neg.end()));
				neg.insert(v[i]);
				neg.insert(v[i + 1]);
				ans -= v[i];
				ans -= v[i + 1];
			}
			else {
				ans += mx;
				pos.insert(mx);
				neg.insert(mn);
				ans -= mn;
			}
			i += 2;
			an.pb(ans);
		}
		while (q--) {
			ll x;
			cin >> x;
			cout << an[x / 2] << " ";
		}
        cout << endl;
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