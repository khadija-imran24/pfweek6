#include<iostream>
using namespace std;
float checkCost(string city,string product,int quantity);
main()
{
    string city;
    string product;
    int quantity;
    float result;
    cout<<"enter city:";
    cin>>city;
    cout<<"enter product:";
    cin>>product;
    cout<<"enter quantity:";
    cin>>quantity;
    result=checkCost(city,product,quantity);
    cout<<"total is:"<<result;
}
float checkCost(string city,string product,int quantity)
{
    float result;
    if(product=="coffee")
    {
        if(city=="sofia")
        {
        result=quantity*0.50;
        }
        else if(city=="plovdiv")
        {
        result=quantity*0.40;
        }
        else if(city=="varna")
        {
        result=quantity*0.45;
        }
    }
    if(product=="water")
    {
        if(city=="sofia")
        {
        result=quantity*0.80;
        }
        else if(city=="plovdiv")
        {
        result=quantity*0.70;
        }
        else if(city=="varna")
        {
        result=quantity*0.70;
        }
         if(product=="beer")
    {
        if(city=="sofia")
        {
        result=quantity*1.20;
        }
        else if(city=="plovdiv")
        {
        result=quantity*1.15;
        }
        else if(city=="varna")
        {
        result=quantity*1.10;
        }
    }
   
    if(product=="sweets")
    {
        if(city=="sofia")
        {
        result=quantity*1.45;
        }
        else if(city=="plovdiv")
        {
        result=quantity*1.30;
        }
        else if(city=="varna")
        {
        result=quantity*1.35;
        }
    }
   
    if(product=="peanuts")
    {
        if(city=="sofia")
        {
        result=quantity*1.60;
        }
        else if(city=="plovdiv")
        {
        result=quantity*1.50;
        }
        else if(city=="varna")
        {
        result=quantity*1.55;
        }
    }
       
   
    }
   
   return result;
}
  