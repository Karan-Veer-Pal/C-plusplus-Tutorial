// Day : WAP to demonstrate the concept of function overloading?

#include<iostream>
using namespace std;

//calculate sum
int sum(int a, int b)
{
    return (a+b);
}
//calculate sum
int sum(int a, int b, int c)
{
    return (a+b+c);
}
//calculate the volume of cylinder:
float volume(int r, int h)
{
    return (3.14*r*r*h);
}
//calculate the volume of cube:
int volume(int a)
{
    return (a*a*a);
}
//calculate the volume of cuboid:
int volume(int l, int b, int h)
{
    return (l*b*h);
}
int main()
{
    cout<<"The sum of 2 argument sum is:"<<sum(5,2)<<endl;
    cout<<"The sum of 3 argument sum is:"<<sum(2,5,4)<<endl;
    cout<<"The volume of cylinder is:"<<volume(2,5)<<endl;
    cout<<"The volume of cube is:"<<volume(2)<<endl;
    cout<<"The volume of cuboid is:"<<volume(2,5,1)<<endl;
    
    return 0;
}
