#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  cout<<"Enter angles of triangle (in degree):"<<endl;
  cout<<"First angle= ";
  cin>>a;
  cout<<"Second angle= ";
  cin>>b;
  cout<<"Third angle= ";
  cin>>c;

  if ((a+b+c)==180)
    cout<<"Triangle is valid"<<endl;
  else
    cout<<"Triangle is not valid"<<endl;
    return 0;
}
