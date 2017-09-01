#include <iostream>

using namespace std;

int main()
{
    float length;
    cout <<"Please enter the length in centimeter"<< endl;
    cin >>length;
    cout <<"Length in meter="<<length/100<< endl;
    cout <<"Length in kilometer="<<length/100000<< endl;
    return 0;
}
