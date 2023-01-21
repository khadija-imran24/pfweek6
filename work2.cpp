#include<iostream>
using namespace std;
int isGreater(int num1,int num2,int num3);
main()
{
    int num1;
    int num2;
    int num3;
    int result;
    cout<<"enter 1st number:";
    cin>>num1;
    cout<<"enter 2nd number:";
    cin>>num2;
    cout<<"enter 3rd number:";
    cin>>num3;
    result=isGreater(num1,num2,num3);
    cout<<"greatest number:"<<result;
    
}
int isGreater(int num1,int num2,int num3)
{
    int greatest;
    if(num1>num2&&num1>num3)
    
        
       {
        greatest=num1;
       }
    
    if(num2>num1&&num2>num3)
    
       
    
     {
        greatest=num2;
        
      }
    
       if (num3>num1&&num3>num2)
       
         
       {
        greatest=num3;
       }
       
       return greatest;
}