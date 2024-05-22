#include<iostream>
using namespace std;
// basically pairs are used to maintain realation between two datatypes
int main()
{ 
    pair<int,string> p;
    p={41,"karan"};
    cout<<p.first<<"  "<<p.second;
    pair<int ,string> &p1=p;
    p.first=10;
    p1.second="abcd";
    cout<<p1.first;

    pair<int,int> parray[4];
    parray[0]={1,2};
    parray[1]={2,3};
    parray[2]={3,4};
    parray[3]={4,5};
    cout<<parray[0].first;



    return 0;
}