#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x=0,y=0,n=0,z=0,swap1=0,swap2=0,newnumber=0;
    cout<<"Enter any number: ";
    cin>>n;
    x=n%10;

    z=n;
    int a=n;
    while(z/10>0)
    {
        z/=10;

    }
    while(n>0)
    {
        n/=10;
        y++;
    }
    swap1=((a-x)+z);
    swap2=(swap1-(z*(pow(10,(y-1)))));
    newnumber=(swap2+(x*pow(10, y-1)));
    cout<<"The new number after swapping first and last digits = "<<newnumber<<endl;
    return 0;
}
