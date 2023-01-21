#include<iostream>
using namespace std;
float playTime(string year,int holiday,int holidayV);
 main()
{
    string year;
    int holiday;
    int holidayV;
    int total_holidays;
    cout<<"enter year:";
    cin>>year;
    cout<<"enter number of hoidays(except saturday and sunday):";
    cin>>holiday;
    cout<<"enter weekends in hometown:";
    cin>>holidayV;
    total_holidays=playTime( year, holiday,holidayV);
    cout<<total_holidays;
}
float playTime(string year,int holiday,int holidayV)
{ 
    float total;
    int  weekend;
    float play;
    float holidayPlay;
    weekend=48;
    play=weekend*0.75;
    holidayPlay=holiday*0.67;
    total= play+holidayPlay;
    
if (year=="normal")
{
    return total;
}
else if(year=="leap")
{
    float leapT;
    leapT=(total*0.15)+total;
    return leapT;
}
}