// Day : 03 WAP to print the value of variables?

#include<iostream>
using namespace std;

int glo=6;
void sum(){
    int a;
    cout<<"The value of function glo is:"<<glo<<endl;
}
int main()
{
    int glo=9;
    glo=89;
    int a=14, b=67;
    float pi=3.14;
    char g='d';
    bool is_t=true;

    sum();

    cout<<"The value of main glo is:"<<glo<<endl<<"The value of boolean is:"<<is_t<<endl;
    cout<<"This is tutorial."<<endl<<"Here the value of a is:"<<a<<endl<<"The value of b is:"<<b<<endl;
    cout<<"The value of pi is:"<<pi<<endl;
    cout<<"The value of g is:"<<g<<endl;

    return 0;
}
