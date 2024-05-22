#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    //lambda Function
    cout<<[](int x,int y){return x+y;}(5,8)<<endl;
    auto sum=[](int x,int y){return x+y;};
    cout<<sum(5,8)<<endl;
    vector<int>v={54,5,56,89,10};
    cout<<all_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl;
    cout<<any_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){return x%2==0;})<<endl;
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    

    


    


    return 0;
}