//WAP on a manipulator in c++?
/* Introduction of manipulator: Basically we have two manipulator are: 
i) endl; --> new line
ii) setw --> for right justified alignment.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a=3, b=56, c=786, d=9998, e=546, f=5463;

    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
    cout<<"The value of d without setw is: "<<d<<endl;
    cout<<"The value of e without setw is: "<<e<<endl;
    cout<<"The value of f without setw is: "<<f<<endl;

    cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    cout<<"The value of d with setw is: "<<setw(4)<<d<<endl;
    cout<<"The value of e with setw is: "<<setw(3)<<e<<endl;
    cout<<"The value of f with setw is: "<<setw(2)<<f<<endl;

    return 0;
}
