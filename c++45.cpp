// Day : 45 WAP to demonstrate the concept of overloading constructor?

#include<iostream>
using namespace std;

class complex
{
    int a, b;

    public:
        complex(int x, int y);
        complex(int x);
        complex(void);
        void putdata(void)
        {
            cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex::complex(int x, int y)
{
    a=x;
    b=y;
}
complex::complex(int x)
{
    a=x;
    b=0;
}
complex::complex(void)
{
    a=45;
    b=77;
}
int main()
{
    complex c1(10,10);
    c1.putdata();

    complex c2(20);
    c2.putdata();

    complex c3;
    c3.putdata();
    
    return 0;
}
