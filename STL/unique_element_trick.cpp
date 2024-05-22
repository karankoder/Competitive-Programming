	// karan_iitbhu
	#pragma GCC optimize("Ofast")
	#include <bits/stdc++.h>
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
	#define pb push_back
	#define f first
	#define s second
	int binaryToDecimal(string n)
	{
	    string num = n;
	    int dec_value = 0;
	  
	    // Initializing base value to 1, i.e 2^0
	    int base = 1;
	    int len = num.length();
	    for (int i = len - 1; i >= 0; i--) {
	        if (num[i] == '1')
	            dec_value += base;
	        base = base * 2;
	    }
	    return dec_value;
	}

	bool cmpa(pair<int, int> a, pair<int, int> b)
	{
		if (a.first != b.first){
			return a.first < b.first;
		}
		else{
			return a.second > b.second;
		}
	}
	ll factorial(ll n)
	{
		ll ans=1;
		for(int i=1;i<=n;i++){
			ans=(ans*i);
		}
		return ans;
	}
	void printv(vector<ll> vec)
	{
	    for (auto &itr : vec)
	    {
	        cout << itr << ' ';
	    }
	    cout << '\n';
	}
	ll sumdigits(ll x){
	     ll y=x;
	     int c=0;
	     ll sum=0;
	     while(y>0){
	          c++;
	          sum+=y%10;
	          y=y/10;
	     }
	     return sum;
	}
	ll countigits(ll x){
	     ll y=x;
	     int c=0;
	     while(y>0){
	          c++;   
	          y=y/10;
	     }
	     return c;
	}
	bool isPrime(ll n)
	{
	    if (n <= 1)
	        return false;
	    for (ll i = 2; i < sqrt(n)+1; i++)
	        if (n % i == 0)
	            return false;
	    return true;
	}
	void primefactors(ll t,map<ll,ll>&m)
	{
	       while (t % 2 == 0)
	    {
	        m[2]++;
	        t = t/2;
	    }
	    for (int i = 3; i <= sqrt(t); i = i + 2)
	    {
	        while (t % i == 0)
	        {
	            m[i]++;
	            t= t/i;
	        }
	    }
	    if (t > 2)
	    {
	        m[t]++;
	    }
	}
	string DecimalToBinary(int num)
	{
	    string str;
	      while(num){
	      if(num & 1) // 1
	        str+='1';
	      else // 0
	        str+='0';
	      num>>=1; // Right Shift by 1 
	    }   
	      return str;
	}
	ll lcm(ll x,ll y){
		ll gcd=__gcd(x,y);
		ll ans=(x*y)/gcd;
		return ans;
	}
	const int M=1e9+7;
	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		int t;
		cin >> t;
		while(t--)
		{
			int n;
			cin>>n;
			vector<int>v;
			for(int i=0;i<n;i++){
				int x;
				cin>>x;
				v.pb(x);
			}
			sort(all(v));
			v.resize(unique(all(v))-v.begin());
			for(auto i:v)
				cout<<i<<" ";
			cout<<endl;


		}
			return 0;
	}	
	// 5432121255555555
