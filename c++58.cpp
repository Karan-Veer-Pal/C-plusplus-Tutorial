//WAP to demonstrate the concept of inheritance ambiguity resolution method one of (b)--> ?
#include<iostream>
using namespace std;

class base1 
{
    public:
    void greet()
    {
        cout<<"How are you?"<<endl;
    }

};

class base2
{
    public:
    void greet()
    {
        cout<<"I am fine."<<endl;
    }
};

class derived : public base1, public base2
{
};

int main()
{
    //Ambiguity --> 

    derived der1;
    //Method 1 of b -->
    der1.base1::greet();
    der1.base2::greet();

    return 0;
}