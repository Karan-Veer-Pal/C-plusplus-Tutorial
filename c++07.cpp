// Day : 07 WAP  to check size of floating and double datatype?

#include<iostream>
using namespace std;

int main()
{
    float a=34.4F;
    long double b=34.4L;

    cout<<"The size of 34.4 is"<<sizeof(34.4)<<endl; //Default its act as a double if convert in floating then we write 34.4f
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The size of a is "<<sizeof(a)<<endl;
    cout<<"The size of b is "<<sizeof(b)<<endl;
    cout<<"The value of a & b is: "<<a<<endl<<b<<endl;

    return 0;
}
