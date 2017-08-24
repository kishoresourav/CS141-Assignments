//C++ PROGRAM TO ENTER LENGTH AND BREADTH OF A RECTANGLE AND FINDS ITS PERIMETER
#include <iostream>

using namespace std;

int main()
{
  int length,breadth;
   cout <<"Please enter length="<< endl;
   cin >>length;
   cout <<"Please enter breadth="<< endl;
   cin >>breadth;

   int Perimeter = 2*(length + breadth);

   cout <<"perimeter of rectangle is="<<Perimeter<< endl;
       return 0;
}
