#include<iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    int age;
    char gender;
    string title;
    cout<<"enter your age:";
    cin>>age;
    cout<<"enter your gender' m 'for male and 'f' for female";
    cin>>gender;
    title=checkTitle(age,gender);
    cout<<"your title is:"<<title;
}
string checkTitle(int age, char gender)
{
    string title;
    if(age>=16&&gender=='m')
    {
        title="Mr.";
    }
     else if(age<16&&gender=='m')
    {
        title="Master";
    }
    else if(age>=16&&gender=='f')
    {
        title="Ms.";
    }
      if(age<16&&gender=='f')
    {
        title="Miss";
    }
    return title;

}