#include<iostream>
using namespace std;
float discount(float amount,string day,string month);
main()
{
    float amount;
    string day;
    string month;
    float payment;
    cout<<"enter amount:";
    cin>>amount;
    cout<<"enter day:";
    cin>>day;
    cout<<"enter month:";
    cin>>month;
    payment=discount(amount,day, month);
    cout<<"total is:"<<payment;

}
float discount(float amount,string day,string month)
{
    float payable;
    if(day=="sunday"&&month=="october" )
    {
        payable=amount-((amount*10)/100);
    }
   else 
   {
     payable=amount;
   }
   
    return payable;
}