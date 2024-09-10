// Day : 52 Diffrence between visibility-mode int c++51.cpp to c++52.cpp--->>>>
// Day : 52 WAP to demonstrate the concept of single inheritance?
#include <iostream>
using namespace std;

class base
{
    int data1; // private by default and is not inherited.

public:
    int data2;
    void getdata();
    int putdata1();
    int putdata2();
};
void base::getdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base::putdata1()
{
    return data1;
}
int base::putdata2()
{
    return data2;
}

class derived : private base // class is being derived privatelly.
{
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
    getdata();
    data3 = data2 * putdata1();
}
void derived::display()
{
    cout << "Value of data 1 is: " << putdata1() << endl;
    cout << "Value of data 2 is: " << data2 << endl;
    cout << "Value of data 3 is: " << data3 << endl;
}
int main()
{
    derived der1;
    der1.process();
    der1.display();
    
    return 0;
}
