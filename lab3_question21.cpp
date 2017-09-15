#include <iostream>
using namespace std;
int main()
{
float a,c,d;
cout<<"Input electricity unit charges : ";
cin>>a;
if(a<=50)
c=a*0.50;

else if(a>50 && a<=150) 
c=((a-50)*0.75)+(50*0.50);

else if(a>150 && a<=250)
c=((a-150)*(1.2))+(100*0.75)+(50*0.5);

else if(a>250)
c=((a-250)*(1.5))+(150*1.2)+(100*0.75)+(50*0.5);

cout<<"Electricity bill = "<<c<<endl;

d=c*(0.2);
cout<<"Additional surcharge on bill = "<<d<<endl;
cout<<"Total electricity bill = "<<c+d<<endl;

return 0;
}

