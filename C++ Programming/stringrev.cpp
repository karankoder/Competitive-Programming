#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string reverse;
	for(int i=s.size()-1; i>=0;i--)
	{
		reverse.push_back(s[i]);
	}
	
	cout<<reverse<<endl;
	
		return 0;
	
}