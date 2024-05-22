#include <iostream>
using namespace std;

int swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
inline int sum(int a, int b)
{
    return a + b;
}
int subs(int a, int b = 100)
{
    return b - a;
}
int sum(int a, int b, int c) // function oerloading
{
    return a + b + c;
}
int main()
{
    int a, b;
    cout << "Enter the number a : ";
    cin >> a;
    cout << "Enter the number b : ";
    cin >> b;
    cout << "The sum of a and b is: " << sum(a, b) << endl;
    cout << "The sum of a and b is: " << sum(a, b) << endl;
    cout << "The sum of a and b is: " << sum(a, b) << endl;
    cout << "The sum of a and b is: " << sum(a, b) << endl;
    cout << "The sum of a and b is: " << sum(a, b) << endl; // inline function will make a request to copy
    cout << "The sum of a and b is: " << sum(a, b) << endl; // the whole function to the calling location
    cout << "The sum of a and b is: " << sum(a, b) << endl; // use only for short functions
    cout << "The sum of a and b is: " << sum(a, b) << endl; // not for large functions
    cout << "The sum of a and b is: " << sum(a, b) << endl;
    cout << "The sum of a and b is: " << sum(a, b) << endl;

    // default arguments
    cout << "The difference of a and b is: " << subs(a) << endl;
    cout << "The difference of a and b is: " << subs(a, b) << endl;

    // function overloding
    cout << "The sum of a and b is: " << sum(a, b) << endl;
    cout << "The sum of a and b is: " << sum(a, b, 5) << endl;

    cout << "the number a before swaping= " << a << endl;
    cout << "the number b before swaping= " << b << endl;
    swap(a, b);
    cout << "the number a after swaping= " << a << endl;
    cout << "the number b after swaping= " << b << endl;

    return 0;
}