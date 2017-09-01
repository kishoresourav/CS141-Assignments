#include <iostream>
using namespace std;

int main()
{
    float marks1,marks2,marks3,marks4,marks5,total,average,percentage;

    cout << "enter the secured marks in physics" << endl ;
    cin >> marks1 ;
    cout << endl ;

    cout << "enter the secured marks in chemistry" << endl ;
    cin >> marks2 ;
    cout << endl ;

    cout << "enter the secured marks in mathematics" << endl ;
    cin >> marks3 ;
    cout << endl ;

    cout << "enter the secured marks in biology" << endl ;
    cin >> marks4 ;
    cout << endl ;

    cout << "enter the secured marks in computer science" << endl ;
    cin >> marks5 ;
    cout << endl ;

    total=marks1+marks2+marks3+marks4+marks5;
    average=total/5;
    percentage=(total/500)*100;

    cout << "the total marks secured in the exam out of 500 = " << total << endl;
    cout << "the average marks = " << average << endl ;
    cout << "the percentage of marks = " << percentage << " %" << endl;
    return 0;
}
