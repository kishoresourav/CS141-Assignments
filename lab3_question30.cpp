#include <iostream>

using namespace std;

int main()
{
   int n=1,a,b,c;
    cout<<"Enter any number: ";
    cin>>a;
    cout<<"Enter range: ";
    cin>>b;
    cout<<"Multiplication table of "<<a<<":"<<endl;
    while (n<=b)
    {
     c=a*n;
     cout<<a<<"*"<<n<<"="<<c<<endl;
     n++;
    }
    return 0;
}
