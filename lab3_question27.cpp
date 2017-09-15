#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter any upper limit of number: ";
    cin>>n;

    for (int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum of naturals between 1 and "<<n<<" = "<<sum<<endl;
    return 0;
}
