#include<iostream>
using namespace std;
float totalTravel(string period,int km);
main()
{
  int km;
  float price;
 
  string period;
  cout<<"enter kilometers(1-5000):";
  cin>>km;
  cout<<"enter period:";
  cin>>period;
  
 price=totalTravel(period,km);
 cout<<"price for cheapest transport:"<<price;
}
float totalTravel(string period,int km)
{
    float price;
    if(km<=20&&period=="day")
    {
        price=0.79*km+0.70;
    }
    if ( km<=20&&period=="night")
    {
        price=0.90*km+0.70;
    }
     else if(km>20&&km<100&&(period=="day"||period=="night"))
    {
        price=0.09*km;
    }
    else if(km>=100&&(period=="day"||period=="night"))
    {
        price=0.06*km;
    }
    return price;

}
