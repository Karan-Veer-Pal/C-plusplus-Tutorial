// Day : 15 WAP to print multiplication table by the user using do while loop?

#include<iostream>
using namespace std;

int main()
{
    int table;

    cout<<"Enter any number which you wants to see a multiplication table: "<<endl;
    cin>>table;

    int i;
    cout<<"The multiplication table is: "<<endl;
    i=1;
    do
    {
        cout<<table<<" x "<<i<<" = "<<table*i<<endl;
        i++;
    } while (i<=10);
       
    return 0;
}
