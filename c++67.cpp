// Day : 67 WAP to demonstrate the concept of this-pointer in c++?
#include<iostream>
using namespace std;

class A
{
    int a;
    int b;
    public:
        void setdata_a(int a)
        {
            // this-pointer operator is used when a variable name is same in class and function. 
            this->a = a;
        }
        void getdata_a(void)
        {
            cout<<"The value of a is: "<<a<<endl;
        }

        A& setdata_b(int b)   //this will return the object
        {
            this->b = b;
            return *this;
        }
        void getdata_b(void)
        {
            cout<<"The value of b is: "<<b<<endl;
        }
};
int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    a.setdata_a(5);
    a.getdata_a();   

    A b;
    b.setdata_a(50);
    b.getdata_b();   
    
    return 0;
}
