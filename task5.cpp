#include<iostream>
using namespace std;
float totalIncome(string screen,int row, int column);
main()
{
    int row;
    int column;
    string screen;
    float total;
    cout<<"enter screening:";
    cin>>screen;
    cout<<"enter row:";
    cin>>row;
    cout<<"enter column:";
    cin>>column;
    total=totalIncome(screen,row,column);
    cout<<"total is:"<<total;


}
float totalIncome(string screen,int row, int column)
{
    float total;
  if(screen=="premier")  
  {
    total=row*column*12;
  }
   if(screen=="normal")  
  {
    total=row*column*7.50;
  }
   if(screen=="discount")  
  {
    total=row*column*5.00;
  }
  return total;
}