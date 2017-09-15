#include <iostream>

using namespace std;

int main()
{
   int salary,HRA,DA;
   cout<<"Enter your Basic Salary:"<<endl;
   cin>>salary;
   if(salary<=10000)
   {
       HRA=(salary)*(.2);
       DA=(salary)*(.8);
       cout<<"HRA="<<HRA<<endl;
       cout<<"DA="<<DA<<endl;
   }
   else if (salary<=20000)
   {
       HRA=(salary)*(.25);
       DA=(salary)*(.9);
       cout<<"HRA="<<HRA<<endl;
       cout<<"DA="<<DA<<endl;
   }
   else
   {
      HRA=(salary)*(.3);
      DA=(salary)*(.95);
       cout<<"HRA="<<HRA<<endl;
       cout<<"DA="<<DA<<endl;
   }
    return 0;
}
