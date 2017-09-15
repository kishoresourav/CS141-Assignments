#include <iostream>

using namespace std;

int main()
{
    int cp,sp,p,l;
    cout<<"Enter cost price (CP):"<<endl;
    cin>>cp;
    cout<<"Enter selling price (SP):";
    cin>>sp;
    p=(sp-cp);
    l=(cp-sp);
    if (sp>cp)
        cout<<"Profit = "<<p<<endl;
     else
        cout<<"Loss = "<<l<<endl;

    return 0;
}
