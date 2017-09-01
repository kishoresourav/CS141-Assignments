#include <iostream>

using namespace std;

int main()
{
    int year,week,day;

    cout<<"Enter no. of days:" << endl;
    cin>> day ;

    year=day/365;
    week=day/7;
    day=day%7;
    cout<<"Years: "<<year<< endl <<"Weeks: "<<week<< endl <<"Days: "<<day;
    return 0;
}
