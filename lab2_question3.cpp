#include <iostream>

using namespace std;

int main()
{
    float temperature ;
    cout << "enter temperature in  farhenheit=" << endl;
    cin >> temperature ;
    cout << "temperature in celsius=" << ((temperature-32))*5/9 << endl;

    return 0;
}
