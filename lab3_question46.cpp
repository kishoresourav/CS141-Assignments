#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<< "Enter first no. : ";
cin>>a;
cout<< "Enter second no. : ";
cin>>b;
c=a*b;
while(a!=b)
{
if(a>b)
a=a-b;
else
b=b-a;
}

cout<<"LCM = "<<c/a<<endl;


return 0;

}
