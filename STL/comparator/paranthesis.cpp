#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    int n;
    cin>>n;
    while(n--){
    string s;
    cin>>s;
    stack<char> st;
    int temp=0;
    for(auto c: s){
        if(c=='(' or c=='{' or c=='[')
        st.push(c);
        else{
            if(st.empty()){
                temp++;
                break;
            }
            else{
                if((c==')' and st.top()=='(') or (c=='}' and st.top()=='{') or  (c==']' and st.top()=='['))
                st.pop();
                else{
                    temp++;
                    break;
                }
            }
        }
    }
    if(!st.empty())
    temp++;
    if(temp==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}