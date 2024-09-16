//BY ME -->
// WAP exercise on inheritance?
#include<iostream>
using namespace std;

/*
Create 2 classes:
1.) SimpleCalculator - Takes input of 2 numbers using a utility function and perform +, -, *, / and display the result using another function.
2.) ScientificCalculator - Takes input of 2 numbers using a utility function and perform any four scientific operation of your choice and display the result using another function.

Create another class HybridCalculator and inherit it using these 2 classes:
Q1.) What type of inheritance are you using?
Q2.) Which mode of inheritance are you using?
Q3.) Create an object of HybridCalculator and display results of simple and scientific calculator?
Q4.) How is code reusability implement? 

Ans1.) Multiple inheritance is used.
Ans2.) Public and protected of base class.
Ans3.) Done
Ans4.) To making a derived class which is inherited by base class.
*/
class Simple1Calculator
{
    protected:
        int sum, sub;
        
    public:
        int simple1(int a, int b)
        {
            sum=a+b;
            sub=a-b;
        }
        void display1()
        {
            cout<<"The sum is: "<<sum<<endl;
            cout<<"The sub is: "<<sub<<endl;
        }
};

class Simple2Calculator
{
    public:
    int mul;
    float div;

    int simple2(int c, int d)
    {
        mul=c*d;
        div=c/d;
    }
    void display2(void)
    {
        cout<<"The mul is: "<<mul<<endl;
        cout<<"The div is: "<<div<<endl;
    }
};

class HybridCalculator : public Simple1Calculator, public Simple2Calculator
{
    public:
    float result;
    void display3()
    {
        cout<<"The result is: "<<sum+sub+mul+div<<endl;
    }

};
int main()
{
    HybridCalculator obj;
    obj.simple1(8,4);
    obj.display1();

    obj.simple2(8,4);
    obj.display2();

    obj.display3();
    return 0;
}