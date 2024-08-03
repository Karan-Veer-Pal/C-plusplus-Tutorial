// Day : 14 WAP using all loop in c++?

#include<iostream>
using namespace std;

int main()
{
    int n=5;

    //FIRST--->>
    for(int i=0; i<n ; i++)
    {
        cout<<"For loop:"<<i<<endl;
    }

    //SECOND--->>
    int i=0;
    while(i<n)
    {
        cout<<"While loop:"<<i<<endl;
        i++;
    }


    //THIRD--->>
    int j=0;
    do
    {
        cout<<"Do While loop:"<<j<<endl;
        j++;
    }while(j<=n);

    return 0;
}
