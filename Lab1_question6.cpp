//C++ PROGRAM TO ENTER RADIUS OF A CIRCLE AND FIND ITS DIAMETER, CIRCUMFERENCE AND AREA
#include <iostream>

using namespace std;

int main()
{

    float radius , pi = 3.14159 , area ,circumference ,diameter ;

      cout << "Please enter the radius of the circle:" << endl ;
      cin >> radius ;

      area = pi * radius * radius ;
      circumference = 2* pi * radius ;
      diameter = 2 * radius ;

      cout << "circumference = " << circumference << endl ;
      cout << "area = " << area<< endl ;
      cout << "diameter = " << diameter<< endl ;


    return 0;
}


