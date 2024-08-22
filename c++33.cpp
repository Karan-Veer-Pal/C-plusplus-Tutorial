//WAP to demonstrate the concept of array of an object?
#include<iostream>
using namespace std;

class student 
{
    int r_no;
    float s_ship;

    public:
        void getdata(void)
        {
            s_ship=7755.4;
            cout<<"Enter the roll no of the student:"<<endl;
            cin>>r_no;
        }
        void putdata(void)
        {
            cout<<"The roll no of the student: "<<r_no<<endl;
        }
};
int main()
{
    student s1, s2[4];
    //s1.getdata();
    //s1.putdata();
    for (int i = 0; i < 4; i++)
    {
        s2[i].getdata();
        s2[i].putdata();
    }
    
    return 0;
}