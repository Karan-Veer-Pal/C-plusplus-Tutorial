// Day : 81 WAP to find the average?

#include<iostream>
using namespace std;

float funcAverage1(int a, int b)
{
    float avg = (a+b)/2.0;
    return avg;
}

float funcAverage2(int a, float b)
{
    float avg = (a+b)/2.0;
    return avg;
}

int main()
{
    float a; 
    a =funcAverage1(5,2);              
    cout<<"The value of average 1 of "<< a <<endl;

    float b; 
    b =funcAverage2(5,2.4);              
    cout<<"The value of average 2 of "<< b <<endl;
    
    return 0;
}
