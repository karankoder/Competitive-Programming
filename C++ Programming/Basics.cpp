#include<iostream>
#include<iomanip>
using namespace std;
 int a=100;
int main()
{ 
    int a=10;
    int n;
    std::cin>>n; //fot input
    cout<<"Value of p is: "<<1<<endl;
    std::cout<<"The value of n is: "<<n<<endl;  // for output
    cout<<"Value of a is:"<<a<<endl;
    cout<<"Value of a globally is:"<<::a<<endl;       //scope resolution operator running

    //by default any decimal number is double
    // EX 23.0 is double bout when we use 23.0f then it becomes float

    // reference variable
    int x=5;
    int &y=x;
    cout<<"Value of y is: "<<y<<endl;
    x=10;
    cout<<"New value of y is: "<<y<<endl;

    // typecasting
    (int)5.0 or int(5.0);

    // manipilators are endl and setw
    //"setw" is used to specify the width of the output
    cout<<"The value of a is: "<<setw(2)<<a<<endl; // from the front side





    return 0;
}

// Derived Data Types in C++:
// Array
// Pointer
// Function