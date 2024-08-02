//WAP to check you are eligible or not for driving?
#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter your age:"<<endl;
    cin>>age;

    //if(0<age<18) 
    if(age<18)
    {
        cout<<"You are not eligible for driving."<<endl;
    }
    else if(age==18 || age>=18)
    {
        cout<<"You are eligible for driving."<<endl;
    }

    return 0;
}