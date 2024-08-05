// Day : 16 WAP to demonstrate the break and continue keyword?

#include<iostream>
using namespace std;

int main()
{
    cout<<"The working of break is: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        if (i==2)
        {
            break;
        }
         cout<<i<<endl;
    }

    cout<<"The working of continue is: "<<endl;
    for(int i = 0; i < 4; i++)
    {
        if (i!=2)
        {
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}
