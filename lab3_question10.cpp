#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter any alphabet:"<<endl;
    cin>>ch;
    if (ch>=65 && ch<=90)
        cout<<"You have entered an uppercase alphabet"<<endl;
    else if (ch>=97 && ch<=122)
        cout<<"You have entered an lowercase alphabet"<<endl;
    else
        cout<<"You have not entered an alphabet"<<endl;
    return 0;
}
