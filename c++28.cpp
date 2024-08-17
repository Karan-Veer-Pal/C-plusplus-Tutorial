//WAP to demonstrate the concept of recurrsion?
//Find factorial and fabonacci sequence of a number?
#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);    
}

int fib(int m)
{
    if (m<=2)
    {
        return 1;
    }
    return fib(m-2)+fib(m-1);
}

int main()
{
    int number;

    cout<<"Enter a number:"<<endl;
    cin>>number;
    cout<<"The factorial of "<<number<<" is "<<factorial(number)<<endl;
    cout<<"The term in fibonacci sequence at position "<<number<<" is "<<fib(number)<<endl;
    return 0;
}