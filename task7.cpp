#include<iostream>
using namespace std;
bool sameNumber ( int num1,int num2, int num3);
main()
{ 
    int num1;
    int num2;
    int num3;
    bool result;
    cout<<"enter 1st number:";
    cin>>num1;
    cout<<"enter 2nd number:";
    cin>>num2;
    cout<<"enter 3rd number:";
    cin>>num3;
    result= sameNumber (  num1,num2, num3);
    cout<<" the numbers are same:";
     if(result==1)
      {
            cout<<"yes";
      }
      else 
      {
        cout<<"no";
      };
}
  bool sameNumber (int num1,int num2, int num3)
  { 
     bool result;
      if(num1==num2&&num1==num3)
      {
        result=1;
      }
      if(num1!=num2||num1!=num3)
      {
        result=0;
      
      }
      if(num2!=num1||num2!=num3)
      {
        result=0; 
      }
  
     
      return result;
  }  