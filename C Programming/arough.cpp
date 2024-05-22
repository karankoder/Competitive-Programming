#include<iostream>
using namespace std;
int main()
{
    int A[]={14,1,8,10};
    int a=A[0];
    for(int i=0;i<4;i++)
    {
        if(A[i]<a)
        a=A[i];
    }
    cout<<"minimum = "<<a;
    return 0;



}