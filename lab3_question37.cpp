#include <iostream>

using namespace std;

int main()
{
    int x,n=0;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Reverse of the given number = ";
    while(x!=0)
    {
        n=x%10;
        x/=10;
       cout<<n;
    }

    return 0;
}
