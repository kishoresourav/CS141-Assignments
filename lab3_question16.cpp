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
  {
    if ((a==b)&&(b==c))
     cout<<"Triangle is equilateral"<<endl;

  else if ((a==b)||(a==c)||(b==c))
    cout<<"Triangle is isosceles"<<endl;

  else
    cout<<"Triangle is scalene"<<endl;
  }
  else
    cout<<"Triangle can't made with these sides"<<endl;
    return 0;
}
