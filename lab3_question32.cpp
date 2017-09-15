#include <iostream>

using namespace std;

int main()
{
    int x,n,z;
    cout<<"Enter any number: ";
    cin>>n;

    if(n<0)
       n=n*(-1);
    else if(n==0)
       n=0;
    z=n;
    while(z/10>0)
    {
        z/=10;

    }
    cout<<"The first digit in given number = "<<z<<endl;
    x=n%10;
    cout<<"The last digit of given number = "<<x<<endl;

    return 0;
}
