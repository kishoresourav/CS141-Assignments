#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,c,D,Root1,Root2;
cout<<"Enter coefficient of x^2:"<<endl;
cin>>a;
cout<<"Enter coefficient of x:"<<endl;
cin>>b;
cout<<"Enter constant term:"<<endl;
cin>>c;
D=(b*b)-(4*a*c);

Root1=(-b+sqrt(D))/(2*a);
Root2=(-b-sqrt(D))/(2*a);

if (D>0)
{
cout<<"Roots are real."<<endl;
cout<<"Root1="<<Root1<<endl;
cout<<"Root2="<<Root2<<endl;
}
else if (D==0)
{
cout<<"Roots are equal."<<endl;
cout<<"Each root ="<<Root1<<endl;
}
else
cout<<"Roots are imaginary"<<endl;
return 0;
} 
