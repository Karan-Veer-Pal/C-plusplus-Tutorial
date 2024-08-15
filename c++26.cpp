// Day : 26 WAP to demonstrate the concept of static data type?
// Day : 26 WAP to demonstrate the concept of inline function?

#include<iostream>
using namespace std;

inline int product(int x, int y)
{
    //static run at least one time after that not execute. 
    static int c=0;
    c++; //c=c+1; Next time it will be incremented. 
    return x*y+c;
}
int main()
{
    int a, b;

    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"The value of the product is: "<<product(a,b)<<endl;
    cout<<"The value of the product is: "<<product(a,b)<<endl;
    cout<<"The value of the product is: "<<product(a,b)<<endl;
    cout<<"The value of the product is: "<<product(a,b)<<endl;
    cout<<"The value of the product is: "<<product(a,b)<<endl;
    cout<<"The value of the product is: "<<product(a,b)<<endl;
    
    return 0;
}
