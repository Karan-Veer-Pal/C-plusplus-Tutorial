//WAP to demonstrate the concept of function?

#include<iostream>
using namespace std;

//int sum(int a, int b); --> Acceptable

int sum(int, int); //-->Acceptable
int main()
{
    int x, y;

    // x and y is actual parameter
    cout<<"Enter the value of x and y:"<<endl;
    cin>>x>>y;

    cout<<"The sum is: "<<sum(x,y);
    return 0;
}

int sum(int a, int b)
{
    // Formal parameter a and b which will be taken the value form actual parameter
    int c=a+b;
    return c;
}