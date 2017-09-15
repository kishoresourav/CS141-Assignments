#include <iostream>
using namespace std;
int main()
{
int x,i;
cout<<"Enter any number : ";
cin>>x;
for(i=2;i<=x/2;i++)
{
if(x%i==0)
{
cout<<"It is not a prime."<<endl;
break;
}
}

if(i==(x/2+1))
cout<<"It is a prime number."<<endl;
return 0;
}
