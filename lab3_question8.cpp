#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
char ch;

cout<<"Enter any alphabet:"<<endl;
cin>>ch;
if(isalpha(ch)!=0)
{
switch(ch)
{
case'a':
case'A':
case'e':
case'E':
case'i':
case'I':
case'o':
case'O':
case'u':
case'U': cout<<"\nIt is a vowel";
         break;
default: cout<<"\nIt is a consonant";
}
}
else
{
cout<<"\nYou have'nt entered a alphabet";
}
return 0;
}
