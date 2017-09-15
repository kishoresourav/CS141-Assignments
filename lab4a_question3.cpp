#include <iostream>

using namespace std;

int myFunction(int a,int b)
{
   int z;
   if(a>b)
    z=a;
    else
    z=b;
    return z;
}
int main()
{
 int a,b;
  cout<<"Enter two numbers : ";
  cin>>a>>b;
  cout<<"The maximum of them = "<<myFunction(a,b)<<endl;
    return 0;
}
