// Day : 19 WAP to demonstrate the pointer with array?

#include<iostream>
using namespace std;

int main()
{
    int arr[]={34,56,57,12};
    int *p=arr;

    cout<<*p<<endl;
    // Also access by this way : 
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;

    cout<<"The value of array is: "<<endl;
    cout<<"The value of *p is: "<<*p<<endl;
    cout<<"The value of *(p+1) is: "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is: "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is: "<<*(p+3)<<endl;

    return 0;
}
