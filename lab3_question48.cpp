#include <iostream>
using namespace std;
int main()
{
int x,i,j,count=0;
cout<<"Enter any number : ";
cin>>x;
cout<<"Prime number between 1 and "<<x<<" : "<<endl;
for(i=2;i<=x;i++)
{
 count=0;
 for(j=2;j<i;j++)
 {
   if(i%j==0)
    {
      count++;
      break;
    }
 }
if(count==0)
{
   cout<<i<<" ";
}
}

return 0;
}
