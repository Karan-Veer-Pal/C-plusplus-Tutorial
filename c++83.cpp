// Day : 83 WAP to performing a swap of a variable with using Function Templates?

#include<iostream>
using namespace std;

template<class T>
void swapp(T &a, T &b)
{
    // Logic 1:
    // T temp;
    // temp = a;
    // a = b;
    // b = temp;

    // Logic 2:
    // a = a+b;
    // b = a-b;
    // a = a-b;

    // Logic 3:
    a = a*b;
    b = a/b;
    a = a/b;
}

int main()
{
    int x, y;
    cout<<"Enter the value of x and y is "<<endl;
    cin>>x;
    cin>>y;
    swapp(x,y);
    cout<<"After Swap. The value of x is "<<x<<endl;
    cout<<"And The value of y is "<<y<<endl;
    
    return 0;
}
