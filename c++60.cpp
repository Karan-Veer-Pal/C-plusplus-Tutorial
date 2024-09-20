// Day : 60 WAP to demonstrate the concept of virtual base class?
// Day : 60 WAP to demonstrate the concept of hybrid inheritance?

#include<iostream>
using namespace std;

class student 
{
    protected:
        int roll_no;
    public:
        void set_no(int a)
        {
            roll_no=a;
        }
        void print_no(void)
        {
            cout<<"Your roll no is: "<<roll_no<<endl;
        }
};

class test : virtual public student  //class test : public virtual student also written as.
{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2)
        {
            maths=m1;
            physics=m2;
        }
        void print_marks(void)
        {
            cout << "Your result is here: "<<endl
            << "maths: " << maths<<endl
            << "physics: " << physics<<endl;
        }
};

class sport : public virtual student
{
    protected:
        float score;
    public:
        void set_score(float scr)
        {
            score=scr;
        }
        void print_score(void)
        {
            cout<<"Your PT score is: "<<score<<endl;
        }
};

class result : public test, public sport
{
    private:
        float total;
    public:
        void display(void)
        {
            total = maths+physics+score;
            print_no();
            print_marks();
            print_score();

            cout<<"Your total score is: "<<total<<endl;
        }
};

int main()
{
    result karan;
    karan.set_no(35);
    karan.set_marks(78.9, 99.5);
    karan.set_score(9);
    karan.display();   
    
    return 0;
}
