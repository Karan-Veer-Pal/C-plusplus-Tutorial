// Day : 23 WAP to demonstrate the concept of reference variable in c++?

#include<iostream>
using namespace std;

int swaprefvar(int &a, int &b);

int main()
{
    int x, y;

    cout<<"Enter the value of x and y:"<<endl;
    cin>>x>>y;
    cout<<"The value of x is: "<<x<<" and the value of y is: "<<y<<endl;
    swaprefvar(x,y);
    cout<<"The value of x is: "<<x<<" and the value of y is: "<<y<<" after calling a function"<<endl;
    
    return 0;
}
int swaprefvar(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"The value of x: "<<a<<" and y: "<<b<<" *inside function"<<endl;
}
