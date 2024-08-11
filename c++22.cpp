// Day : 22 WAP to demonstate the concept of call by reference?

#include<iostream>
using namespace std;

int swap(int *a, int *b); 

int main()
{
    int x, y;

    cout<<"Enter the value of x and y:"<<endl;
    cin>>x>>y;

    cout<<"The value of x: "<<x<<" and y: "<<y<<endl;
    swap(&x, &y);
    cout<<"The value of x: "<<x<<" and y: "<<y<<" *after function calling"<<endl;
    return 0;
}
int swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"The value of x: "<<*a<<" and y: "<<*b<<" *inside function"<<endl;
}
