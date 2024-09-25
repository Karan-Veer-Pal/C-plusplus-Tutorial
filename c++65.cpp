//WAP to demonstrate the concept of pointer to object and arrow operater and a little bit array also? 
#include<iostream>
using namespace std;

class complex
{
    int real , imaginary;
    public:
        void setdata(int a, int b)
        {
            real = a;
            imaginary = b;
        }
        void getdata()
        {
            cout<<"The real part is: "<<real<<endl;
            cout<<"The imaginary part is: "<<imaginary<<"i"<<endl;
        }
};
int main()
{
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex; //-->> this can also work

    // cout<<"By normal object calling: "<<endl;
    // c1.setdata(4,5);
    // c1.getdata();

    cout<<"By pointer de-referencing calling: "<<endl;
    // (*ptr).setdata(6,7); oorrrrr-->>
    ptr->setdata(6,7);
    (*ptr).getdata();   //also written as -->>
    // ptr->getdata();

    // Array of object -->>
    complex *p = new complex[4];
    p->setdata(1,4);
    p->getdata();
    return 0;
}
