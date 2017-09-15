#include <iostream>
#include <cmath>

using namespace std;

int nthDigit(int number, int n){
    int nth=((number/(int(pow(10, n-1))))%10);
    return nth;
}
int main()
{
    int num, pdtDigits=1;
    cout << "Enter number: ";
    cin >> num;

    for(int i=1; i<=(log10(num)+1); ++i){
        pdtDigits *= nthDigit(num, i);
        cout << nthDigit(num, i) << " * ";

    }

    cout << " = " << pdtDigits << endl;
    return 0;
}
