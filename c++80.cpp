// Day : 80 WAP to demonstrate the concept of Class Templates with Default Parameters?

#include<iostream>
using namespace std;

template<class T1 = int, class T2 = float, class T3 = char>  //Default Parameters
class karan
{
    public:
        T1 a;
        T2 b;
        T3 c;
        karan(T1 x, T2 y, T3 z)
        {
            a = x;
            b = y;
            c = z;
        }
        void display()
        {
            cout<<" The value of a is "<<a<<endl;
            cout<<" The value of b is "<<b<<endl;
            cout<<" The value of c is "<<c<<endl;
        }
};

int main()
{
    karan <>k(4, 6.4, 'a');
    k.display(); 
    cout<<endl;
    karan <float, char, char>a(4.4, 'n', 'b');  //Over-write the default parameters
    a.display();  
    
    return 0;
}
