// Day : 59 WAP to demonstrate the concept of inheritance ambiguity resolution method two--> ?

#include<iostream>
using namespace std;


class B 
{
    public:
        void say()
        {
            cout<<"Hello World"<<endl;
        }
};

class D : public B
{
    int a;
    public:
        // If two classes have two function which are same then the derived class function is prefered first otherwise it is like a normal ambiguity but this ambiguity is automatically re-solved by compiler.
        void say()
        {
            cout<<"Hello world and beautiful people"<<endl;
        }
};

class E : public B{};
int main()
{
    //Ambiguity -->
    B b;
    b.say();

    D d;
    d.say();

    //Method two -->
    E e;
    e.say();
	
    return 0;
}
