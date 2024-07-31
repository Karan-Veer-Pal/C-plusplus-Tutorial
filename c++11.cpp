//WAP on a manipulator in c++?
/* Introduction of manipulator: Basically we have two manipulator are: 
i) endl; --> new line
ii) setw --> for right justified alignment.
*/
#include<iostream>
#include<iomanip >
using namespace std;

int main()
{
    int a=3, b=56, c=9998;

    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;

    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;

    return 0;
}