#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  cout<<"Enter sides of triangle:"<<endl;
  cout<<"First side= ";
  cin>>a;
  cout<<"Second side= ";
  cin>>b;
  cout<<"Third side= ";
  cin>>c;

  if (((a+b)>c)&&((a+c)>b)&&((b+c)>a))
    cout<<"Triangle is valid"<<endl;
  else
    cout<<"Triangle is not valid"<<endl;
    return 0;
}
