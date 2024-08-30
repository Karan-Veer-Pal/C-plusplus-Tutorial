//WAP to demostrate of the comcept of parameterized constructor by implicit call? 
#include<iostream>
using namespace std;

class complex
{
    int a, b;

    public:
        //Parameterized constructor
        complex(int x, int y);

        void putdata()
        {
            cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex::complex(int x, int y)
{
    a=x;
    b=y;
};
int main()
{
    //Implicit call
    complex c1(4,6);
    c1.putdata();
    return 0;
}