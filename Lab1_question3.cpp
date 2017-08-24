//C++ PROGRAM TO ENTER TWO NUMBERS AND PERFORM ALL ARITHMETIC OPERATIONS
#include <iostream>

using namespace std;

int main()
{
   float a,b;
   cout <<"Please enter 1st number="<< endl;
   cin >>a;
   cout <<"Please enter 2nd number="<< endl;
   cin >>b;

   int sum = a+b;
   int subtract = a-b;
   int product = a*b;
   float divide = a/b;


   cout <<"the sum is="<<sum<< endl;
   cout <<"the subtraction is="<<subtract<< endl;
   cout <<"the product is="<<product<< endl;
   cout <<"the division is="<<divide<< endl;

    return 0;
}
