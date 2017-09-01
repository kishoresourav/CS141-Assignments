#include <iostream>
using namespace std;

int main()
{
   float P,T,R,SI ;

    cout << "enter the principle amount " << endl ;
    cin >> P ;
    cout << endl;

    cout << "enter the interest rate per period " << endl ; // rate in percentage
    cin >> R ;
    cout << endl;

    cout << "enter the time for which the money is borrowed or lent" << endl ; // time in year
    cin >> T;
    cout << endl;

    SI=(P*T*R)/100;

    cout << "the simple interest for the money borrowed or lent  = " << SI << endl;
    return 0;
}
