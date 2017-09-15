#include <iostream>

using namespace std;

int main()
{
   int x;
   int a,b,c,d,e,f,g,h,i;
   cout<<"Enter the amount:"<<endl;
   cin>>x;
   a=x/2000;
   b=(x%2000)/500;
   c=(x%500)/100;
   d=(x%100)/50;
   e=(x%50)/20;
   f=(x%20)/10;
   g=(x%10)/5;
   h=(x%5)/2;
   i=(x%2);

   cout<<"Notes of 2000="<<a<<endl;
   cout<<"Notes of 500="<<b<<endl;
   cout<<"Notes of 100="<<c<<endl;
   cout<<"Notes of 50="<<d<<endl;
   cout<<"Notes of 20="<<e<<endl;
   cout<<"Notes of 10="<<f<<endl;
   cout<<"Notes of 5="<<g<<endl;
   cout<<"Notes of 2="<<h<<endl;
   cout<<"Notes of 1="<<i<<endl;

    return 0;
}
