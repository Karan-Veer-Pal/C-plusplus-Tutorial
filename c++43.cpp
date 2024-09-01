//WAP to demonstrate the example of parameterized constructor?
#include<iostream>
using namespace std;

class point
{
    int x, y;

    public:
        point(int a, int b);

        void displaypoints(void)
        {
            cout<<"Your points is: ("<<x<<","<<y<<")"<<endl;
        }
};


point::point(int a, int b)
{
    x=a;
    y=b;
};
int main()
{
    point p1(4,5);
    p1.displaypoints();
    point p2(8,9);
    p2.displaypoints();
    return 0;
}