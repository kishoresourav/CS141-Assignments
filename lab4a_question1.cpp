#include <iostream>

using namespace std;

int cubeFunction(int x)
{
    int cube=(x*x*x);
    return cube;
}

int main()
{
   int num;
   cout<<"Enter a number :";
   cin>>num;
   cout<<cubeFunction(num);
    return 0;
}
