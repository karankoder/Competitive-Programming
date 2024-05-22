#include<bits/stdc++.h>
using namespace std;
// vectors are similar to dynamic memory allocation in array
int main()
{
    vector<int> v;  // empty vectors
    // for taking input in vectors
    for(int i=0;i<5;i++)
    {
        // cin>>v[i];   not possible
        int x;
        cin>>x;
        v.push_back(x);      //O(1)
    }


    //for printing the elements of the vectors
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;

    //for declaring the size of the vector
    vector<int> v1(10,5);  // all the elements initialize with 5
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
    v1.pop_back();  // for deleting the last element

    vector<int> v2=v1;      // this will only copy the whole vector v1 into v2 with time complexity O(n)
    vector<int> &v3=v1;     // for referencing means changes will reflect into both vectors

    //we can also make vectors of strings
    vector<string>s;

    // vector of pairs in c++;
    vector<pair<int,int>>vp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        vp.push_back({x,y});
    }
    for(int i=0;i<vp.size();i++)
    cout<<vp[i].first<<" "<<vp[i].second<<endl;





    
    return 0;
}