// Day : 09 WAP on a type casting?

#include<iostream>
using namespace std;

int main()
{
    int a;
    float b;

    cout<<"Enter the integer value of a:"<<endl;
    cin>>a;
    cout<<"Enter the floating value of b:"<<endl;
    cin>>b;

    //Doubt---------------------------------------->>
    cout<<"The value of a is: "<<((float)a)<<endl;
    cout<<"The value of a is: "<<float(a)<<endl;

    cout<<"The value of b is: "<<(int)b<<endl;
    cout<<"The value of b is: "<<int(b)<<endl;

    cout <<"The expresion is a+b: "<<a+b<<endl;
    cout <<"The expresion is a+int(b): "<<a+int(b)<<endl;
    cout <<"The expresion is a+(int)b: "<<a+(int)b<<endl;

    return 0;
    
}
