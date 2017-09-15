#include <iostream>

using namespace std;

int main()
{
    float a,b,c,d,e,p;
    cout<<"Enter marks of following subjects (out of 100)"<<endl;
    cout<<"MATHS:"<<endl;
    cin>>a;
    cout<<"PHYSICS:"<<endl;
    cin>>b;
    cout<<"CHEMISTRY:"<<endl;
    cin>>c;
    cout<<"BIOLOGY:"<<endl;
    cin>>d;
    cout<<"COMPUTER:"<<endl;
    cin>>e;
    p=((a+b+c+d+e)/500.0)*100;

    cout<<"Percentage="<<p<<"%"<<endl;

    if(p>=90)
     cout<<"Percentage >= "<<p<<"%"<<" : Grade A"<<endl;
    else if(p>=80)
     cout<<"Percentage >= "<<p<<"%"<<" : Grade B"<<endl;
    else if(p>=70)
     cout<<"Percentage >= "<<p<<"%"<<" : Grade C"<<endl;
    else if(p>=60)
      cout<<"Percentage >= "<<p<<"%"<<" : Grade D"<<endl;
    else if(p>=40)
      cout<<"Percentage >= "<<p<<"%"<<" : Grade E"<<endl;
    else if(p<40)
      cout<<"Percentage < "<<p<<"%"<<" : Grade F"<<endl;
    return 0;
}
