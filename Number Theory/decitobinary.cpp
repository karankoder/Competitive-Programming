#include<bits/stdc++.h>
using namespace std;

void printbinary(int n){
    for(int i=10;i>=0;--i){
        cout<<((n>>i)&1);
    }
    cout<<endl;
}
int main()
{ 
    //code to check whether a bit is set or not.
    int a=-8;
    int i=1;
    if(((1<<i)&a))
    cout<<"set bit"<<endl;
    else
    cout<<"u1nset bit"<<endl;

    //how to set a bit
    printbinary(a | (1<<2));                                                                        

    //how to unset a bit
    printbinary(a & (~(1<<1)));

    //count of set bit in a number
    int an=0;
    for(int i=0;i<31;i++){
        if((1<<i)&a)
        an++;
    }
    cout<<an<<endl;
    //built in function for setbit
    cout<<__builtin_popcount(100)<<endl;
    printbinary(8);


    return 0;
}