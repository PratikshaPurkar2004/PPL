#include<iostream>
#include<cstring>
#include "customer.h"
using namespace std;

Customer::Customer()
{
    no=111;
    strcpy(name,"bob");
    qty=0;
    price=0;
    discount=0;
    netPrice=0;
}

void Customer::input()
{
    cout<<"Enter customer number::";
    cin>>no;
    cout<<"Enter customer name::";
    cin>>name;
    cout<<"Enter a quntity::";
    cin>>qty;
    cout<<"Enter a price::";
    cin>>price;
}

void Customer::calDiscount()
{
    totalPrice=price*qty;
    if(totalPrice>=25000)
        discount=0.15*totalPrice;
    else    
        discount=0.10*totalPrice;
    netPrice=totalPrice-discount;
}

void Customer::show()
{
    cout<<"cutomer no::" <<no <<endl;
    cout<<"customer name::"<<name <<endl;
    cout<<"quntity ::"<<qty <<endl;
    cout<<"price::" <<price <<endl;
    cout<<"TotalPrice::"<<totalPrice <<endl;
    cout<<"Discount::" <<discount <<endl;
    cout<<"NetPrice::" <<netPrice <<endl;
}
