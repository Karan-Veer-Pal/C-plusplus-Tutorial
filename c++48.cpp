//WAP to demonstrate the concept of copy constructor?
#include<iostream>
using namespace std;

class number
{
    int a;

    public:
        //Default constructor-->
        number()
        {
            a=0;
        }
        // Paramerterized constructor-->
        number(int num)
        {
            a=num;
        }
        // // Copy constructor-->
        // When compiler is not found any copy constructor then, compiler run its own copy constructor.
        number(number &z1)
        {
            cout<<"Copy constructor called!!!!"<<endl;
            a=z1.a;
        }
        void putdata(void)
        {
            cout<<"The number of this object is: "<<a<<endl;
        }
};
int main()
{
    number n1, n2, n3(45), z2;
    n1.putdata();
    n2.putdata();
    n3.putdata();
    number z1(n1); //copy constructor invoked
    z1.putdata();

    z2=n3; //copy constructor is not called.
    z2.putdata();

    number z3=n3; //copy constructor invoked
    z3.putdata();
    
    return 0;
}