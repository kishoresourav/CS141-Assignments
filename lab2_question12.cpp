#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   float P,T,R,CI;

    cout << "enter the principle amount " << endl ;
    cin >> P ;

    cout << "enter the interest rate per period " << endl ; // rate in percentage
    cin >> R ;

    cout << "enter the time for which the money is borrowed or lent" << endl ; // time in year
    cin >> T;

    CI=P*(pow((1 + R / 100), T) - 1);

    cout << "the compound interest for the money borrowed or lent  = " << CI << endl;
    return 0;
}
