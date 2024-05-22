#include <bits/stdc++.h>
// Competitve Coding
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define TLE cerr << endl \
                 << "Time Elasped : " << 1.0 * clock() / CLOCKS_PER_SEC << endl;
                   
// Loops        fucking
#define FC(i, j, k, in) for (int i = j; i < k; i += in)
#define RFC(i, j, k, in) for (int i = j; i >= k; i -= in)
#define F(i, n) for (int i = 0; i < n; i++)
#define RF(i, n) for (int i = n - 1; i >= 0; i--)
#define FITR(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define FEACH(x, a) for (auto x : a)
// Sort
#define SA(v) sort(v.begin(), v.end())
#define SD(v) sort(v.begin(), v.end(), greater<int>())
#define SC(v) sort(v.begin(), v.end(), compare)
// Important Methods
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define f first
#define s second
#define endl "\n"
#define all(v) v.begin(), v.end()
#define L length()
#define P cout <<
#define I cin >>
#define ub(v, x) upper_bound(all(v), x) // First value greater than x
#define lb(v, x) low_bound(all(v), x)   // First value greater than or equal to x
// Containers
#define PII pair<int, int>
#define VI vector<int>
#define VLL vector<long long>
#define VVI vector<vector<int>>
#define VII vector<pair<int, int>>
#define VS vector<string>
#define VVLL vector<vector<long long>>
#define VPLL vector<pair<long, long>>
#define MPII map<int, int>
#define SETI set<int>
#define MSETI multiset<int>
#define uint unsigned int
#define ll long long int
#define ull unsigned long long
#define ld long double
// Constants
#define MOD 1000000007
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
using namespace std;
 
ll pow(ll a, ll n)
{
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= a;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    // Make sure to use long long int if required
 
    int TC;
    cin >> TC;
 
    while (TC--)
    {
        int n;
        cin >> n;
        string s;
        I s;
        reverse(all(s));
        ll ans = 0;
        ll power = 1;
        for (int i = 0; i < n; i++)
        {
            ans += power * (s[i] - '0');
            power *= 2;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}