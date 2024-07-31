// Day : 06 WAP to access the global variable from main()?

#include<iostream>
using namespace std;

int c=45;
int main()
{
    int a, b, c;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;

    //Another global variable:
    {
        int x=67;
    }

    c=a+b;
    cout<<"The sum is:"<<c<<endl;

    cout<<"The global c is:"<<::c;




    //Doubt-------------------------------------------------->>
    // cout<<"The another global x is:"<<::x;

    return 0;
}
