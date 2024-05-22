#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int> >
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
#define __builtin__popcount __builtin__popcountll
#define __builtin_ctz __builtin_ctzll
#define __builtin_clz __builtin_clzll
#define take(x) for(int i=0;i<x.size();i++)cin>>x[i];


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

bool compare(pair<int,int>& a, pair<int,int>& b){
    return a.F<b.F;
}

void solve() {
    int n,q;
    cin>>n>>q;
    vi a(n);
    vi p(n+1,0);
    que_min h;
    que_max g;
    mii m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        p[i+1]=p[i]+a[i];
        h.push(a[i]);
        if(i==2){
            m[i]=h.top();
            g.push(m[i]);
            h.pop();
        }
        else if(i%2==0 && i>2){
            int curr=m[i-2];
            int c=h.top();
            h.pop();
            int d=h.top();
            h.pop();
            g.push(c);
            g.push(d);
            curr+=(c+d);
            // if((i+1)%3==0){
            //     int e=g.top();
            //     g.pop();
            //     int f=g.top();
            //     g.pop();
            //     curr-=(e+f);
            //     h.push(e);
            //     h.push(f);
            // }
            //else{
                int e=g.top();
                g.pop();
                curr-=(e);
                h.push(e);
            //}
            m[i]=curr;
        }
    }

    while(q--){
        int k;
        cin>>k;
        cout<<p[k]-2*m[k-1]<<" ";
    }
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);



    clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}