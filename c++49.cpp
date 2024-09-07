// Day : 49 WAP to demonstrate the concept of destructor? 

#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 

int count=0;
class number
{
    public:
        number()
        {
            count++;
            cout<<"This is a time when my constructor is called for object number."<<endl;
        }
        ~number()
        {
            cout<<"This is the time when my destructor is called for object number."<<count<<endl;
            count--;
        }
};
int main()
{
    cout<<"We are inside our main function."<<endl;
    cout<<"Creating first objects n1"<<endl;
    number n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        number n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    
    return 0;
}
