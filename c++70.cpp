//WAP to demonstrate the concept of Virtual Function?
#include<iostream>
using namespace std;

class base 
{
    public:
    int var_base = 1;

    virtual void display()
    {
        cout<<"Displaying Base Class variable var_base "<< var_base << endl;
    }
};

class derived : public base 
{
    public:
    int var_derived = 2;

    void display()
    {
        cout<<"Displaying Base Class variable var_base "<< var_base << endl;
        cout<<"Displaying Derived Class variable var_derived "<< var_derived << endl;
    }
};

int main()
{
    base *ptr_base;

    derived obj_derived;

    ptr_base = &obj_derived;

    ptr_base -> display(); 
    return 0;
}