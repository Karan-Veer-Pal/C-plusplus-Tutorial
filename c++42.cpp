// Day : 42 WAP to demostrate of the comcept of parameterized constructor by explicit call? 

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
    //explicit call
    complex c1 = complex(8,9);
    c1.putdata();
    
    return 0;
}
