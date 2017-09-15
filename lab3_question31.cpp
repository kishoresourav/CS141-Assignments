#include <iostream>

using namespace std;

int main()
{
    int x=0,n;
    cout<<"Enter any number: ";
    cin>>n;
    if(n<0)
       n=n*(-1);
    else if(n==0)
       n=1;
    while(n>0)
    {
        n/=10;
        x++;
    }
    cout<<"The number of digits in given number = "<<x<<endl;
    return 0;
}
