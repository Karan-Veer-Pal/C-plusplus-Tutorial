// Day : 38 WAP on simple example of friend function?

#include<iostream>
using namespace std;

class B;
class A
{
    int data;

    public:
        void getdata(int value)
        {
            data=value;
        }
        friend void add(A,B);
};

class B
{
    int number;

    public:
        void getdata(int value)
        {
            number=value;
        }
        friend void add(A,B);
};

void add(A o1, B o2)
{
    cout<<"Summings datas of A and B objects gives me: "<<o1.data+o2.number<<endl;
}
int main()
{
    A x1;
    x1.getdata(3);

    B x2;
    x2.getdata(9);

    add(x1,x2);
    
    return 0;
}
