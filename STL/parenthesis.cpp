#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unordered_map<char,int>m={{'[',-3},{'{',-2},{'(',-1},{']',3},{'}',2},{')',1}};
    for(int i=0;i<n;i++)
    {
        long long int temp=0;
        string s;
        cin>>s;
        stack<char>st;
        for(char value:s)
        {
            if(m[value]<0)
            st.push(value);
            else
            {
                if(st.empty())
                temp++;
                else if((!st.empty()) && (m[st.top()]+m[value]!=0))
                {
                    temp++;
                    break;
                }
                else{
                    if(!st.empty())
                    st.pop();
                }
            }
        }
        if(!st.empty())
        {
            temp++;
        }
        if(temp==0)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
    
    
}