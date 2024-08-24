// Day : 35 WAP to demonstrate the concept of friend function?

#include<iostream>
using namespace std;

class complex 
{
    int a, b;

    /*Below line means that non member - sumcomplex function is allowed to do anything with my 
        private data member.*/
    friend complex sumcomplex(complex o1, complex o2);

    public:
        void getdata(int v1, int v2)
        {
            a=v1;
            b=v2;
        }

        /*Also declare the friend function in public:    
        friend complex sumcomplex(complex o1, complex o2);*/ 
        void putdata()
        {
            cout<<"Your number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.getdata((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.getdata(1,4);
    c1.putdata();

    c2.getdata(1,5);
    c2.putdata();

    sum = sumcomplex(c1,c2);
    sum.putdata();
    
    return 0;
}

/*
Properties of friend functions
1.) Not in the scope of the class.
2.) Since it is not in the scope of the class, it cannot be called from the object of 
    that class. c1.sumcomplex() == Invalid.
3.) Can be invoked without the help of any object.
4.) Usually contains the object as arguments.
5.) Can be declared inside public or private section of the class.
6.) It cannot access the members directly by the names and need object_name.member_name to 
access any member.
*/
