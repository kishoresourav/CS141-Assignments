#include <iostream>

using namespace std;

int main()
{
    int a;
    cout <<"Enter a number="<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<"It is positive"<<endl;
    }
    else if(a<0)
    {
        cout<<"It is negative"<<endl;
    }
    else
    {
        cout<<"zero"<<endl;
    }
    return 0;
}
