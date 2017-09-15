#include <iostream>

using namespace std;

float dia(float r)
{
    float dia=2*r;
    return dia;
}
float cir(float r)
{
    float cir=2*3.14*r;
    return cir;
}
float area(float r)
{
    float area=3.14*r*r;
    return area;
}
int main()
{
   float r;
   cout<<"Enter radius of a circle :";
   cin>>r;
   cout<<"Diameter of circle = "<<dia(r)<<endl;
   cout<<"Circumference of circle = "<<cir(r)<<endl;
   cout<<"Area of circle = "<<area(r)<<endl;
    return 0;
}
