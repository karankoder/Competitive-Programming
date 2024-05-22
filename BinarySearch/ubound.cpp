#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int>v,int key){
    int lo=0;
    int hi=v.size()-1;
    while(hi>=lo){
        int mid= (lo+hi)/2;
        if((lo==hi and v[mid]>=key) or v[mid]==key)
        return v[mid];
        else if(v[mid]<key)
        lo=mid+1;
        else
        hi=mid;
    }
    return -1;

}
int upperbound(vector<int>v,int key){
     int lo=0;
    int hi=v.size()-1;
    while(hi>=lo){
        int mid= (lo+hi)/2;
        if(v[mid]==key and mid!=v.size()-1)
        return v[mid+1];
        else if((lo==hi and v[mid]>=key))
        return v[mid];
        else if(v[mid]<key)
        lo=mid+1;
        else
        hi=mid;
    }
    return -1;
}
int main()
{ 
    int t=100;
    while(t--){
    vector <int> v = {2,5,8,10,50,100,200};
    int key;
    cin >> key;
    cout<<lowerbound(v,key)<<endl;
    cout<<upperbound(v,key);
    }




    return 0;
}