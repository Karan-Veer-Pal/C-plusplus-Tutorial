//WAP to demonstrate the concept of Function Objects (Functors)?
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    //Function Objects: Function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4 , 2, 54, 7};
    // sort(arr, arr+5);  //means sort for 5 elements -->> default sort in acending order
    sort(arr, arr+6, greater<int>()); //Function Object -->> this will sort in decending order
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}