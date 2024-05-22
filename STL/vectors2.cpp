#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
int main()
{ 
    // vector of vector or basically nesting of vectors
    vector<vector<int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        vector<int>temp;
        for(int j=0;j<p;j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);

        }
        v.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].size()<<endl;
        for(int j=0;j<v[i].size();j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}