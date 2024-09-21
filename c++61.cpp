//BY SIR -->
// WAP exercise on inheritance?
#include<iostream>
#include<cmath>
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
Ans2.) Publicmode of inheritance is used. (protected ko bhi use kar sakte hai).
Ans3.) Done
Ans4.) To making a derived class which is inherited by base class.
*/
class SimpleCalculator
{
    int a, b;
    public:
        void getdata_simple()
        {
            cout<<"Enter the value for simple calculation: "<<endl;
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }

        void perform_opertions_simple()
        {
            cout<<"The value of a+b is: "<<a+b<<endl;
            cout<<"The value of a-b is: "<<a-b<<endl;
            cout<<"The value of a*b is: "<<a*b<<endl;
            cout<<"The value of a/b is: "<<a/b<<endl;
        }
};

class ScientificCalculator
{
    int a, b;
    public:
        void getdata_scientific()
        {
            cout<<"Enter the value for scientific calculation: "<<endl;
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }

        void perform_opertions_scientific()
        {
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of exp(a) is: "<<exp(a)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
        }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

};
int main()
{
    // SimpleCalculator calc1;
    // calc1.getdata_simple();
    // calc1.perform_opertions_simple();

    // ScientificCalculator calc2;
    // calc2.getdata_scientific();
    // calc2.perform_opertions_scientific();

    HybridCalculator calc3;
    calc3.getdata_simple();
    calc3.perform_opertions_simple();
    calc3.getdata_scientific();
    calc3.perform_opertions_scientific();
    return 0;
}