// Day : 08 WAP on a reference variables?

#include<iostream>
using namespace std;

int main()
{
    int x=455;
    int &y = x;  //-->> correct   
    // int y;  -->> correct
    // y = x;  -->> correct

    cout<<"The value of x is: "<<x<<endl;
    cout<<"The value of y is: "<<y<<endl;
}
