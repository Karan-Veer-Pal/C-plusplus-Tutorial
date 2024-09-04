// Day : WAP to demonstrate the concept of default argument constructors?

#include<iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    int data3;

    public:
        simple(int a, int b=9, int c=8) //Default argument constructor
        {
            data1=a;
            data2=b;
            data3=c;
        }
        void putdata(void)
        {
            cout<<"The value of data1, data2 and data3 is: "<<data1<<" , "<<data2<<" and "<<data3<<endl;
        }
};
int main()
{
    simple s1(4); //simple s1(4,45,67); --> precedence level is high as compare to default argument constructor.
    s1.putdata();
    
    return 0;
}
