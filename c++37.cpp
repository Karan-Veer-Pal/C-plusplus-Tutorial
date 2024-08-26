//WAP to demonstrate the concept of friend class(whole class as a friend)?
#include<iostream>
using namespace std;

//Forward Declaration
class complex;

class calculator
{
    public:
        //int sumRealcomplex(complex o1, complex o2); --> Also run
        int sumRealcomplex(complex , complex );
        int sumimgcomplex(complex , complex );
};

class complex 
{
    int a, b;

    //friend int calculator::sumRealcomplex(complex o1, complex o2); --> Also run
    //Individually declaring function as friend.
    // friend int calculator :: sumRealcomplex(complex , complex );
    // friend int calculator :: sumimgcomplex(complex , complex );

    // Aliter:Declaring the entire calculator class as a friend -->
    friend class calculator;
    public:
        void getdata(int x, int y)
        {
            a=x;
            b=y;
        }

        void putdata()
        {
            cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};

int calculator::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a+o2.a);
}


int calculator::sumimgcomplex(complex o1, complex o2)
{
    return (o1.b+o2.b);
}

int main()
{
    complex c1, c2;

    c1.getdata(2,4);
    c1.putdata();

    c2.getdata(5,6);
    c2.putdata();

    calculator cal1;
    int resultreal=cal1.sumRealcomplex(c1,c2);
    cout<<"The sum of real part of o1 and o2 is:"<<resultreal<<endl;

    int resultimg=cal1.sumimgcomplex(c1,c2);
    cout<<"The sum of real part of o1 and o2 is:"<<resultimg<<"i"<<endl;

    return 0;
}