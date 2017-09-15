#include <iostream>

using namespace std;

int main()
{
  int a;
  cout<<"Enter a week day number:"<<endl;
  cin>>a;
   if (a==1)
    cout<<"The week day is Monday"<<endl;
    else if (a==2)
    cout<<"The week day is Tuesday"<<endl;
    else if (a==3)
    cout<<"The week day is Wednesday"<<endl;
    else if (a==4)
    cout<<"The week day is Thursday"<<endl;
    else if (a==5)
    cout<<"The week day is Friday"<<endl;
    else if (a==6)
    cout<<"The week day is Saturday"<<endl;
    else if (a==7)
    cout<<"The week day is Sunday"<<endl;
    else
        cout<<"You have not entered correct number"<<endl;

    return 0;
}
