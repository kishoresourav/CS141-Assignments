#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter a number:"<<endl;
cin>>x;
if (x%5==0 && x%11==0)
{
cout<<"Given number is divisible by 5 and 11."<<endl;
}
else
{
cout<<"Given number is not divisible by 5 and 11."<<endl;
}
return 0;
}

