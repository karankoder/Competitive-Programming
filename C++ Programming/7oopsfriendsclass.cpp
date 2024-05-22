#include<iostream>
using namespace std;

class complex;
class calculator
{
    public:
    void sumcomp(complex,complex);
};

class complex
{
    int a,b;
    // friend void calculator ::sumcomp(complex,complex);
    // Aliter: Declaring the entire calculator class as friend
    friend class calculator;
    public:
    void setn(int x, int y)
    {
        a=x;
        b=y;
    }
    void printn(int x, int y)
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i\n";
    }
};
void calculator::sumcomp(complex x,complex y)
{
    complex z;
    z.setn((x.a+y.a),(x.b+y.b));
    z.printn((x.a+y.a),(x.b+y.b));
}
 
int main()
{ 
    int a,b,x,y;
    cout<<"Enter the number a ";
    cin>>a;
    cout<<"Enter the number b ";
    cin>>b;
    cout<<"Enter the number x ";
    cin>>x;
    cout<<"Enter the number y ";
    cin>>y;
    complex p,q;
    calculator sumco;

    p.setn(a,b);
    p.printn(a,b);
    q.setn(x,y);
    q.printn(x,y);
    sumco.sumcomp(p,q);
   
    

    
    return 0;
}