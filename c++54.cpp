//WAP to demonstrate the concept of multi-level inheritance? 
#include<iostream>
using namespace std;

class student
{
    protected:
        int r_n;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};
void student::set_roll_number(int r)
{
    r_n = r;
}
void student::get_roll_number()
{
    cout<<"The roll number is:"<<r_n<<endl;
}

class exam:public student
{
    protected:
        float maths;
        float physics;
    public:
        void setmarks(float, float);
        void getmarks(void);
};
void exam::setmarks(float m1, float m2)
{
    maths=m1;
    physics=m2;
}
void exam::getmarks()
{
    cout<<"The marks obtainted in maths are: "<<maths<<endl;
    cout<<"The marks obtainted in physics are: "<<physics<<endl;
}

class result:public exam{
    float percent;

    public:
        void display()
        {
            get_roll_number();
            getmarks();
            cout<<"Your percentage is:"<<(maths+physics)/2<<endl;
        }
};
int main()
{
    /*
    Notes:
    1.) If we are inheriting B from A and C from B : [A-->B-->C]
    2.) A is the base for B and B is the base class for C
    3.) A-->B-->C is called multi-level Inheritance Path */
    result karan;;
    karan.set_roll_number(420);
    karan.setmarks(94.0,90.0);
    karan.display();
      
    return 0;
}