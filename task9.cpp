#include<iostream>
using namespace std;
float ticket(float budget,string catagory,int people );
float ticket(float budget,string catagory,int people );

main()
{
    float v=499.99;
   float n=249.99;
    float total1;
    float total;
    float total2;
    float totalbudget;
    string catagory;
    int people;
    float budget;
    cout<<"enter budget:";
    cin>>budget;
    cout<<"enter catagory(vip or normal):";
    cin>>catagory;
    cout<<"enter number of people:";
    cin>>people;
    totalbudget=ticket(budget,catagory,people);
    if(catagory=="vip")
    n=n*people;
    v=v*people;
    {
        if (totalbudget<v)
        {
            total=v-totalbudget;
            cout<<"not enough money!you need"<<total<<"QTRs";
        }
        else
        {
            total=totalbudget-v;
            cout<<"yes! you have"<<total<<"QTRsleft";
        }
    }
    if (catagory=="normal")
    {
         if (totalbudget<n)
        {
            total=n-totalbudget;
            cout<<"not enough money!you need"<<total<<"QTRs";
        }
        else
        {
            total=totalbudget-n;
            cout<<"yes! you have"<<total<<"QTRsleft";
        }
    }
    
   
}
float ticket(float budget,string catagory,int people )
{
    float totalbudget;
    
   if(catagory=="vip"&&(people>=1||people>=4))
   {
    totalbudget= (budget-(budget*0.75));
   
    }
     if(catagory=="vip"&&(people>=5||people>=9))
   {
   totalbudget= (budget-(budget*0.60));
    
    }
     if(catagory=="vip"&&(people>=10||people>=24))
   {
    totalbudget= (budget-(budget*0.50));
   }
    
     if(catagory=="vip"&&(people>=25||people>=49))
   {
    totalbudget= (budget-(budget*0.400));
    }
     if(catagory=="vip"&&(people>=50))
   {
    totalbudget= (budget-(budget*0.25));
   }
   if(catagory=="normal"&&(people>=1||people>=4))
   {
    totalbudget= (budget-(budget*0.75));
   
    }
     if(catagory=="normal"&&(people>=5||people>=9))
   {
    totalbudget= (budget-(budget*0.60));
    
    }
     if(catagory=="normal"&&(people>=10||people>=24))
   {
    totalbudget= (budget-(budget*0.50));
   }
    
     if(catagory=="normal"&&(people>=25||people>=49))
   {
    totalbudget=(budget-(budget*0.40));
    }
     if(catagory=="normal"&&(people>=50))
   {
    totalbudget= (budget-(budget*0.25));
   }
   return totalbudget;
}