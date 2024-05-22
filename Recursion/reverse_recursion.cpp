#include<bits/stdc++.h>
using namespace std;
#define printvec(vec) {for(int i=0;i<vec.size();i++) cout<<vec[i]<<" "; cout<<endl;}

void func(vector<int>&v, int l, int r) {
	if (l >= r)
		return;
	swap(v[l], v[r]);
	func(v, l + 1, r - 1);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		vector<int>v = {4, 5, 7, 1, 10, 5};
		func(v, 0, 5);
		printvec(v);
	}
	return 0;
}