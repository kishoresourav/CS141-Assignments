#include<iostream>
using namespace std;
int main()
{
         int num, a, b, x, c;
    cout << " Enter any number: ";
    cin >> num;
    for (a = 0; a < 10; a++)
    {
        cout << "The frequency of " << a << " = ";
        x = 0;
        for (b = num; b > 0; b = b / 10)
        {
            c = b % 10;
            if (c == a)
            {
                x++;
            }
        }
        cout << x << endl;
    }



	return 0;
}
