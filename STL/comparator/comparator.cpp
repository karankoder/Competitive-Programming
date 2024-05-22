#include<bits/stdc++.h>
using namespace std;
bool cmpa(int a,int b)
{
    return a>b;
}
int main()
{
    int A[]={5,8,7,69,7,58,80};
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            //if(A[i]>A[j])           //here comes the concept of comparator
            if(cmpa(A[i],A[j]))
            swap(A[i],A[j]);
        }
    }
    for(auto value:A)
    cout<<value<<" ";
    return 0;
}