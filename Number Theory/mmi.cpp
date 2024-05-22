#include<bits/stdc++.h>
using namespace std;
 
int main()
{ 
    //mmi - modular multiplicative inverse
    //(a/b)%m = (a*b^-1)%m , now it's similar to modular multiplication, mmi defined only if a and m are coprime
    //(a*b)%m=1 , then b is the multiplicative inverse of a, we can easily find that with time complexity O(m)
    // for op timised way we use fermat's theorem
    // a^(m-1)%m=1
    // by using this, we can say that,
    //a^(m-2)%m= a^-1 , now it's a simple binary multiplication


    return 0;
}