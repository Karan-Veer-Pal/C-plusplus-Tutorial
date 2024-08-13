// Day : 24 WAP based on c++ reference variable? 

#include<iostream>
using namespace std;

int &swapreference(int &u)
{
    return u;
}
int main()
{
     int i;

    cout<<"Enter the value of i:"<<endl;
    cin>>i;
    cout<<"The value of i is:"<<i<<endl;
    swapreference(i);
    cout<<"The value of i is:"<<i<<endl;
    swapreference(i)=566;
    cout<<"The value of i is:"<<i<<endl;

    return 0;
}
