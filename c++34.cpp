//WAP to sum of two complex number? 
#include<iostream>
using namespace std;

class complex
{
    int a, b;

    public:
        void getdata(int v1, int v2)
        {
            a=v1;
            b=v2;
        }
        void getdatabysum(complex o1, complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void putdata()
        {
            cout<<"Your complex no. is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
    complex c1, c2, c3;
    c1.getdata(1,2);
    c1.putdata();

    c2.getdata(3,4);
    c2.putdata();

    c3.getdatabysum(c1,c2);
    c3.putdata();
    return 0;
}