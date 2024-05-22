#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    // int counter;
    static int counter;  // by default static variable takes 0 value

public:
    
    void setPrice(void);
    void displayPrice(void);
    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of counter is "<<counter<<endl;       // static member function is used to access static variable only.    
    }
    
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    // cout<<"The value of count is : "<<counter<<endl;
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int Shop::counter;           // Counter is the static data member of class Employee   
// static data is used to preserve the value of variable across all the objects.

//int shop::counter=1000;   if we want to initiaze it other than 0
int main()
{
    Shop dukaan,a;
    
    dukaan.setPrice();
    Shop::getCount();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    a.setPrice();
    Shop::getCount();
    a.displayPrice();
    
   

    return 0;
}
