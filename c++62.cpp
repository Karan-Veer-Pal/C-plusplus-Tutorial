//WAP to demonstrate the concept of constructor in derived class?
#include<iostream>
using namespace std;

/*
Case 1:
If constructor are present in both the classes.
class B : public A
{
    Order of execution of constructor --> first A class constructor is called then B class constructor is called.
};

Case 2:
If constructor are present in A, B and C classes.
class A : public B, public C
{
    Order of execution of constructor --> first B class constructor is called then C class constructor is called then A class constructor is called.
};

Case 3:
If constructor are present in A, B and C classes.
class A :public B, virtual public C
{
    Order of execution of constructor --> first C class constructor is called then B class constructor is called then A class constructor is called.
};
*/
class base1
{
    int data1;
    public:
        base1(int i)
        {
            data1=i;
            cout<<"Base 1 class constructor is called."<<endl;
        }

        void print_data_base1(void)
        {
            cout<<"The value of data 1 is: "<<data1<<endl;
        }
};

class base2
{
    int data2;
    public:
        base2(int i)
        {
            data2=i;
            cout<<"Base 2 class constructor is called."<<endl;
        }
        void print_data_base2(void)
        {
            cout<<"The value of data 2 is: "<<data2<<endl;
        }
};

class derived : public base1, public base2
{
    int derived1, derived2;
    public:
        derived(int a, int b, int c, int d) : base1(a), base2(b)
        {
            derived1=c;
            derived2=d;
            cout<<"Derived class constructor is called"<<endl;
        }
        void print_data_derived(void)
        {
            cout<<"The value of derived1 is: "<<derived1<<endl;
            cout<<"The value of derived2 is: "<<derived2<<endl;
        }
};
int main()
{
    derived karan(1,2,3,4);
    karan.print_data_base1();
    karan.print_data_base2();
    karan.print_data_derived();    
    return 0;
}
