//WAP to demonstrate the concept of single inheritance? 
#include<iostream>
using namespace std;

//Base class-->
class employee 
{
    public:
        int id;
        float salary;
        
        employee(){}
        employee(int empID)
        {
            id=empID;
            salary=34.0;
        }
};

/*Derived class-->
syntax-->
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}} here visibility-mode is private or public of inheritance.
{
    members/method/etc..
};

Note:-->
1.) Default visibility-mode is private.
2.) Public visibility-mode: public members of the base class becomes public members of the derived class.
3.) Private visibility-mode: public members of the base class becomes private members of the derived class.
4.) Private member of base class are never inheritance.
*/

// Creating a programmer class derived from employee base class 
class programmer : public employee
{
    public:
        int language_code;
        programmer(int empID)
        {
            id=empID;
            language_code=9;
        }

        void putdata()
        {
            cout<<id<<endl;
        }
};

int main()
{
    employee karan(1), prashant(2);
    cout<<karan.salary<<endl; //first run
    cout<<prashant.salary<<endl; //second run

    programmer skillf(10);
    cout<<skillf.language_code<<endl; //third run
    cout<<skillf.id<<endl; //forth run
    skillf.putdata(); //fifth run
    return 0;
}