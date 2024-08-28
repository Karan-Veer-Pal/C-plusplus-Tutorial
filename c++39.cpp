// Day : 39 WAP on complex example of friend function?
// Day : 39 WAP to swap the private data of one class to another class?

#include<iostream>
using namespace std;

class c2;
class c1 
{
    int value1;
    friend void swap(c1 & ,c2 &);

    public:
        void getdata(int data)
        {
            value1=data;
        }
        void putdata()
        {
            cout<<"The value is:"<<value1<<endl;
        }
};

class c2
{
    int value2;
    friend void swap(c1 & , c2 &);

    public:
        void getdata(int data)
        {
            value2=data;
        }
        void putdata()
        {
            cout<<"The value is:"<<value2<<endl;
        }
};

void swap(c1 &x, c2 &y)
{
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}
int main()
{
    c1 obj1;
    c2 obj2;

    obj1.getdata(56);
    obj2.getdata(78);
    swap(obj1,obj2);

    cout<<"The value of c1 after swap becomes:";
    obj1.putdata();

    cout<<"The value of c2 after swap becomes:";
    obj2.putdata();
    
    return 0;
}
