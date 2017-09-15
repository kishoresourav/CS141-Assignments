#include <iostream>

using namespace std;

int main()
{
  int num,x,n=0,rev=0;
    cout<<"Enter a number: ";
    cin>>x;
    num=x;
    while(x!=0)
    {
        n=x%10;
        rev=(rev*10)+n;
        x/=10;
    }
     cout<<"\nReverse of the given number = "<<rev;
    if (rev==num)
         cout << "\n The number is a palindrome.";
     else
         cout << "\n The number is not a palindrome.";

    return 0;
}
