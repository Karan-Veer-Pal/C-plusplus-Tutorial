//WAP to perform basic operator?

#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;

    //Basic operation:
    cout<<"The value of a%b is:"<<a%b<<endl;
    cout<<"The value of a++ is:"<<a++<<endl;
    cout<<"The value of a-- is:"<<a--<<endl;
    cout<<"The value of ++a is:"<<++a<<endl;
    cout<<"The value of --a is:"<<--a<<endl;
    cout<<endl;

    //Assignment operation: --> used to assigned a value to variables
    int x=9;
    float y=9.8;
    char z='i';

    //Comparion operation:
    cout<<"Following are the comparion operator in c++:"<<endl;
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;

    //Logical operation:
    cout<<"Following are logical opertors in c++:"<<endl;
    cout<<"The value of this logical and operator((a==b)&&(a<b)) is: "<<((a==b)&&(a<b))<<endl;
    cout<<"The value of this logical and operator((a==b)&&(a>b)) is: "<<((a==b)&&(a>b))<<endl;
    cout<<"The value of this logical and operator(!(a==b)&&(a>b)) is: "<<(!(a==b)&&(a>b))<<endl;
    cout<<"The value of this logical or operator((a==b)||(a<b)) is: "<<((a==b)||(a<b))<<endl;
    cout<<"The value of this logical or operator((a==b)||(a>b)) is: "<<((a==b)||(a>b))<<endl;
    cout<<"The value of this logical not operator(!(a==b)) is: "<<(!(a==b))<<endl;
    
    return 0;
}
