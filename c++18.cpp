//WAP to demonstrate the using of array?
#include<iostream>
using namespace std;

int main()
{
    int marks[]={45,87,34,89};
    int arr[4];

    marks[2]=100;
    cout<<"The marks is:"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    arr[0]=90;
    arr[1]=60;
    arr[2]=80;
    arr[3]=20;

    cout<<"The arr is:"<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;

    int i;
    cout<<"Take input by using for loop:"<<endl;
    for ( i = 0; i < 4; i++)
    {
        cout<<"The marks take a input by the loop:"<<marks[i]<<endl;
    }


    cout<<"Take input by using while loop:"<<endl;
    i = 0;
    while (i < 4)
    {
        cout<<"The marks take a input by the loop:"<<marks[i]<<endl;
        i++;
    }
    

    cout<<"Take input by using do-while loop:"<<endl;
    i=0;
    do
    {
        cout<<"The marks take a input by the loop:"<<marks[i]<<endl;
        i++;
    }while(i < 4);

    int a[100], n;

    cout<<"Enter the size of the array:"<<endl;
    cin>>n;

    cout<<"Enter the element into the array:"<<endl;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"The element into the array is:"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}