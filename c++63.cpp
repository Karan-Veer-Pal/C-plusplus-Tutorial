//WAP to demonstrate the concept of constructor initialization list?
#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor(argument-lists) : initialization-section
{
    assignment + other code;
}

class test
{
    int a, b;
    public:
        test(int i, int j) : a(i), b(j){body-constructor}
};
*/

class test
{
    int a;
    int b;
    public:
        //1.) test(int i, int j) : a(i), b(j)
        //2.) test(int i, int j) : a(i), b(i+j)
        //3.) test(int i, int j) : a(i), b(2*j)
        //4.) test(int i, int j) : a(i), b(a+j)
        //5.) test(int i, int j) : b(j), a(i+b)  -->> Red Flag this will create problem because 'a' will be initiallized first
        /*6.) test(int i, int j) : b(j), a(i+b)  this will be execute when 'b' will be initiallized first*/
        // {
        //     cout<<"Contructor executed"<<endl;
        //     cout<<"Value of a is: "<<a<<endl;
        //     cout<<"Value of b is: "<<b<<endl;
        // }
        test(int i, int j) : a(i)
        {
            b=j;
            cout<<"Contructor executed"<<endl;
            cout<<"Value of a is: "<<a<<endl;
            cout<<"Value of b is: "<<b<<endl;
        }
};

int main()
{
    test t(3,4);
    return 0;
}