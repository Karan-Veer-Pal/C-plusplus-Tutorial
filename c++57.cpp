//WAP to demonstrate the concept of inheritance ambiguity resolution method one of (a)--> ?
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
    public:
    // Method 1 of a -->
    void greet()
    {
        base1 :: greet();
        base2 :: greet();
    }
};

int main()
{
    //Ambiguity --> 

    derived der1;
    //Method 1 of a -->
    der1.greet();

    return 0;
}