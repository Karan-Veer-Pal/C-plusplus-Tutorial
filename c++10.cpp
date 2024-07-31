// Day : 10 WAP to changing the value of variable or showing it is not possible to change the value of constant?

#include<iostream>
using namespace std;

int main()
{
    int a=56;
    a=98;
    const int b=50;
    //b=100; You will get error because b is a constant. So it is not possible to change the value of constant.

    cout<<"The value of normal int a is:"<<a<<endl;
    cout<<"The value of constant int b is:"<<b<<endl;
    
    
    return 0;
}
