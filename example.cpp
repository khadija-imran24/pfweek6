#include<iostream>
using namespace std;

main()
{
    int price;
    string shop;
    cout<<"enter a number:";
    cin>>price;
    cout<<"enter brand";
    cin>>shop;
    if (price<=1500)
    {if (shop=="outfiters")
        cout<<"good";
    }
    else
    {
        cout<<"not good";
    }
    
}