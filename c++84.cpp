//WAP to demonstrate the concept of Member Function Templates and Overloading Template Function?
#include<iostream>
using namespace std;

template<class t>
class karan
{
    public:
        t data;
        karan(t a)
        {
            data = a;
        }
        void display();
};

//Member Function Template
// To write the function outside the class:
template <class t>
void karan<t>::display()
{
    cout<<data<<endl;
}

//Overloading Template Function
void func(int a)
{
    cout<<"I am first func "<<a<<endl;
}

template<class t>
void func(t a)
{
    cout<<"This is templatized func "<<a<<endl;
}

template<class t>
void func1(t a)
{
    cout<<"This is templatized func "<<a<<endl;
}

int main()
{
    // karan <float>k1(5.7);
    // k1.display();

    // karan <char>k2('K');
    // k2.display();

    // karan <int>k3(87);
    // k3.display();

    func(4); //Exact matched function will takes the highest priority
    func1(9); //Exact matched function will takes the highest priority
    return 0;
}