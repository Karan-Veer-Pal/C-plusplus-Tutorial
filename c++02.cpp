//WAP to perform a arithmetic operation?
#include<iostream>
using namespace std;

int main()
{
    int a, b, sum, sub, mul, div;

    cout<<"Enter the value of a and b:"<<endl;
    std::cin>>a>>b;

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    cout<<"The sum is "<<sum<<endl;
    cout<<"The sub is "<<sub<<endl;
    cout<<"The mul is "<<mul<<endl;
    cout<<"The div is "<<div<<endl;

    return 0;
}