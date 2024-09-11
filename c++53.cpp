//WAP to demonstrate the concept of protected access modifier?
//program only tell the concept not worked
#include<iostream>
using namespace std;

class base 
{
    protected: //this specifier is like a private but it can be inherit also..
        int a;
    private:
        int b;
};

/*
For a protected member :
                            public_derivation           private_derivation          protected_derivation
    1.)private members      Not-inherited               Not-inherited               Not-inherited  
    2.)protected members    protected                   private                     protected                     
    3.)public members       public                      private                     protected
*/
class derived : protected base 
{

};

int main()
{
    base b;
    derived d;
    // cout<<b.a; will not work since a is protected in both base as well as derived class
    return 0;
}