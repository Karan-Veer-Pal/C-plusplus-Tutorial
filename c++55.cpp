//WAP to demonstrate the concept of multiple inheritance?
#include<iostream>
using namespace std;


/*
Syntax for inheriting in multiple inheritance
class derivedC : visibility-mode base1, visibility-mode base2
{
    class body of class "derivedC";
};
*/

class base1 
{
    protected:
    int base1int;
    public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
    protected:
    int base2int;
    public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class derived : public base1, public base2
{
    public:
    void show()
    {
        cout<<"The value of Base1:"<<base1int<<endl;
        cout<<"The value of Base2:"<<base2int<<endl;
        cout<<"The sum of these values is:"<<base1int+base2int<<endl;
    }
};

/*
The inherited derived class will look something like this:
Data Menmbers:
    base1int --> protected
    base2int --> protected

Member functions:
    set_base1int --> public
    set_base2int --> public
    show --> public
*/
int main()
{
    derived karan;
    karan.set_base1int(25);
    karan.set_base2int(5);
    karan.show();
    return 0;
}