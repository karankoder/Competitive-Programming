//karan_iitbhu
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
		int n; 
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		if(n%2==0){
			for(int i=0;i<n;i++){
				if(v[i+1]<v[i])
					swap(v[i],v[i+1]);
				i++;
			}
		}
		else{
			for(int i=1;i<n;i++){
				if(v[i+1]<v[i])
					swap(v[i],v[i+1]);
				i++;
			}
		}
		int check=0;
		for(int i=0;i<n;i++){
			if(v[i]>v[i+1])
				check++;
		}
		if(check==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

}