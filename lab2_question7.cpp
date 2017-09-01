#include <iostream>

using namespace std;

int main()
{
    float a,b,c;
    cout <<"Enter first angle="<< endl;
    cin >>a;
    cout <<"Enter second angle="<< endl;
    cin >>b;
    c=180-(a+b);
    cout <<"The third angle of the triangle is="<<c<< endl;

    return 0;
}
