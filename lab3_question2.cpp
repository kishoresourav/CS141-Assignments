#include <iostream>
using namespace std;
int main ()
{
int x,y,z;
cout<<"Enter first number="<<endl;
cin>>x;
cout<<"Enter second number="<<endl;
cin>>y;
cout<<"Enter third number="<<endl;
cin>>z;
if (x>y && x>z)
{
cout<<"maximum is="<<x<<endl;
}
else if (y>x && y>z)
{
cout<<"maximum is="<<y<<endl;
}
else 
{
cout<<"maximum is="<<z<<endl;
}
return 0;
} 

