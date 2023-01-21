#include<iostream>
using namespace std;

main()
{
   char going;
   char lecture;
   cout<<"do you have class today(press Y for yes)";
   cin>>going;
   cout<<"are your friends going?(press Y for yes )";
   cin>>lecture;
   if (going=='Y')
   {
    if (lecture=='Y')
    {
        cout<<"you are also going";
    }
   }
}