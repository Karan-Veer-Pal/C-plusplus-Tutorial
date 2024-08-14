// Day : 25 WAP to demonstrate the concept of inline function?

#include<iostream>
using namespace std;

//inline use when function body must be of 1 or 2 line.
inline int product(int x, int y)
{
    return x*y;
}
int main()
{
    int a, b;

    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"The value of the product is: "<<product(a,b)<<endl;
    
    return 0;
}
