//WAP to demonstrate the concept of the class?
#include<iostream>
using namespace std;

class employee
{
    private:
        int a, b;
    public:
        int c, d, e;

        void setdata(int a1, int b1);
        void getdata()
        {
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }
};

void employee::setdata(int a1, int b1)
{
    a=a1;
    b=b1;
}
int main()
{
    employee karan;
    //karan.a=134; --> This will generates error because a is private.
    karan.c=3;
    karan.d=34;
    karan.e=89;
    karan.setdata(1,2);
    karan.getdata();
    return 0;
}