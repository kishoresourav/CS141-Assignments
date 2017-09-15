#include <iostream>
using namespace std;
int main ()
{
int a,b;
cout <<"Enter first number="<<endl;
cin >>a;
cout <<"Enter second number="<<endl;
cin >>b;
if (a>b)
{
cout <<"Maximum is="<<a<<endl;
}
else if (a=b)
{
cout <<"Both are equal"<<endl;
}
else 
{
cout <<"Maximum is="<<b<<endl;
}
return 0;
}
