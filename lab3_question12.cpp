#include <iostream>

using namespace std;

int main()
{
  int a;
  cout<<"Enter a month number:"<<endl;
  cin>>a;
   if (a>0 && a<13)
   {
       if (a==1||a==3||a==5||a==7||a==8||a==10||a==12)
        cout<<"The number of days = 31"<<endl;
       else if (a==4||a==6||a==9||a==11)
        cout<<"The number of days = 30"<<endl;
       else
        cout<<"The number of days = 28 or 29"<<endl;
   }

   else
    cout<<"You have entered an invalid number"<<endl;

    return 0;
}
