//karan_iitbhu
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    	int n;
        cin>>n;
        vector<int>v1(n+10);
        vector<int>v2(n+10);
        for(int i=1;i<=n;i++){
            cin>>v1[i];
        }
        for(int i=1;i<=n;i++){
            cin>>v2[i];
        }
        int count=1;
        for(int i=1;i<=n;i++){
            while(v2[count]<v1[i])
            	count++;
            cout<<v2[count]-v1[i]<<" ";
        }
        cout<<endl;
        count=1;
        for(int i=1;i<=n;i++){
                count=max(count,i);
            while((v2[count]>=v1[count+1]) and count<n)
            	count++;
            cout<<v2[count]-v1[i]<<" ";

        }
        cout<<endl;
    }

}
