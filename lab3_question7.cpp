#include <iostream>
using namespace std;
int main()
{
char c;
cout<<"Enter a character:"<<endl;
cin>>c;
if ((c>='A' && c<='Z')  || (c>='a' && c<='z'))
{
cout<<c<<" is an alphabet"<<endl;
}
else
{
cout<<c<<" is not an alphabet"<<endl;
}
return 0;
}
