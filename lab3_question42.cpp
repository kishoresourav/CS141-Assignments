#include <iostream>
using namespace std;

int main()
{
   int base,exponent,i,power=1;
   cout<<"Enter base = ";
   cin>>base;
   cout<<"Enter exponent = ";
   cin>>exponent;
   for(i=0;i<exponent;i++)
   {
       power=power*base;
   }

   cout<<base<<" ^ "<<exponent<<" = "<<power<<endl;
    return 0;
}
