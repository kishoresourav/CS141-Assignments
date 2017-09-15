#include <iostream>
using namespace std;
void myFun(int a)
{
    if(a%2==0)
     cout<<"It is an even number."<<endl;
    else
     cout<<"It is an odd number."<<endl;
}
int main()
{
 int x;
 cout<<"Enter any natural number : ";
 cin>>x;
 myFun(x);
return 0;
}
