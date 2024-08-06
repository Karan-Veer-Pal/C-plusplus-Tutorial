//WAP to demonstrate the concept of pointer?
#include<iostream>
using namespace std;

int main()
{
    int a = 3;
    int *b = &a;

    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value at address b is by using *b: "<<*b<<endl;
    cout<<"The address of a is by using &a: "<<&a<<endl;
    cout<<"The address of a is by using b: "<<b<<endl;

    int **c = &b;
    cout<<"The value at address c is using **c...: "<<**c<<endl;
    cout<<"The value at address c is by using *c: "<<*c<<endl;
    cout<<"The address of b is by using &b: "<<&b<<endl;
    cout<<"The address of b is by using c: "<<c<<endl;

    return 0;
}