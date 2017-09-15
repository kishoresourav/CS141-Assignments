#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
char ch;
cout<<"\nEnter any character\n";
cin>>ch;
if(isalpha(ch)!=0)
cout<<"\nIt is an alphabet\n";
else if(isdigit(ch)!=0)
cout<<"\nIt is a digit\n";
else cout<<"\nIt is a special character\n";
return 0;
}
