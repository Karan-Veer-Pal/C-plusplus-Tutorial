//WAP to demonstrate the concept of pointer to derived class?
#include<iostream>
using namespace std;

class baseClass 
{
    public:
        int base_var1;
        
        void display()
        {
            cout<<"Displaying Base Class variable base_var1 "<< base_var1 << endl;
        }
};

class derivedClass : public baseClass
{
    public:
        int derived_var1;
        
        void display()
        {
            cout<<"Displaying Base Class variable base_var1 "<< base_var1 << endl;
            cout<<"Displaying Derived Class variable derived_var1 "<< derived_var1 << endl;
        }
};

int main()
{
    baseClass *base_ptr;
    baseClass base_obj1;
    
    derivedClass derived_obj1;

    base_ptr = &derived_obj1; //pointing base class pointer to derived class

    base_ptr -> base_var1 = 34;
    base_ptr -> display(); //calling base class pointer to own class function not call the derived class function  -->>> It is called late binding..

    // base_ptr -> derived_var1 = 134; Not Workable because base class pointer not points to derived class variables

    derivedClass *derived_ptr;
    derived_ptr = &derived_obj1;
    derived_ptr -> derived_var1 = 98;
    derived_ptr -> display(); 
    
    return 0;
}