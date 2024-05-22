#include<bits/stdc++.h>
using namespace std;
// 10^5= 1e5
// 2*10^8= 2e8
// integer - 10^9
// long int - 10^12
// long long int - 10^18
int main()
{ 
      
    int a=4, b=3;
    cout<<a+++b<<endl;      // output - 7
    a=4; b=3;


    cout<<a + ++b<<endl;    // output - 8
    a=5; b=3;
    int incr;    
    incr=(a>b)&&(b++);      // true if first condition is true as second condition will execute only if first corre
    cout<<"Value of incr = "<<incr<<endl;      // this is concept of short circuiting
    cout<<"Value of b = "<<b<<endl;     // it means that if there is a condition anywhere in the expression that returns fale then other expresiion will not get evaluated

    // in case of short circuiting of ||

    a=5; b=3;
    int in=((a>b) || (b++));  // it means that if there is a condition anywhere in the expression that returns true then the other statement will not get evaluated
    cout<<"Value of in = "<<in<<endl;   
    cout<<"Value of b = "<<b<<endl;

    //bitwise operators - |,&,<<,>>,^,~
    int p= 8,q=5;
    int result=p|q;
    cout<<"Value of p|q = "<<result<<endl;
    result=p&q;
    cout<<"Value of p&q = "<<result<<endl;
    result= 5<<1;
    cout<<"Value of 5<<1 = "<<result<<endl;
    result= 5<<2;
    cout<<"Value of 5<<2 = "<<result<<endl;
    result= 5>>1;
    cout<<"Value of 5>>1 = "<<result<<endl;
    result= 5>>2;
    cout<<"Value of 5>>2 = "<<result<<endl;
    result= p^q;
    cout<<"Value of p^q = "<<result<<endl;

    // some interesting facts and codes - 
    int t=(3,4,8);  // simply evaluates all the expression and returns last value
    cout<<"Value of t is = "<<t<<endl;
    t=(3,cout<<"Hello World\n",8);  
    cout<<"Value of t is = "<<t<<endl;
    //////  , operator has least precedence   //////
    int d;
    d=3,4,8;     // similar to (d=3) , 4 , 8
    cout<<"Value of d is = "<<d<<endl;






    


    return 0;
}