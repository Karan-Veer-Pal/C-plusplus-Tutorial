//WAP to demonstrate the concept os structure and union?
#include<iostream>
using namespace std;

typedef struct employee
{
    int id;
    char name[32];
    float salary;
}e;

union manager
{
    int id;
    char name[32];
    float salary;
};

int main()
{
    e e1; 
    cout<<"Concept of structure:"<<endl;
    cout<<"Enter the id of the employee:"<<endl;
    cin>>e1.id;
    cout<<"Enter the name of the employee:"<<endl;
    cin>>e1.name;
    cout<<"Enter the salary of the employee:"<<endl;
    cin>>e1.salary;
    

    cout<<"The id of the employee is:"<<e1.id<<endl;
    cout<<"The name of the employee is:"<<e1.name<<endl;
    cout<<"The salary of the employee is:"<<e1.salary<<endl;
    

    union manager e2;
    cout<<"Concept of union:"<<endl;
    cout<<"Enter the id of the employee:"<<endl;
    cin>>e2.id;
    cout<<"Enter the name of the employee:"<<endl;
    cin>>e2.name;
    cout<<"Enter the salary of the employee:"<<endl;
    cin>>e2.salary;
    

    cout<<"The id of the employee is:"<<e2.id<<endl;
    cout<<"The name of the employee is:"<<e2.name<<endl;
    cout<<"The salary of the employee is:"<<e2.salary<<endl; 

    cout<<"Concept of enum"<<endl;
    enum director{managers, supervisor, employ};
    director d1=supervisor;
    cout<<d1<<endl;
    cout<<managers<<endl;
    cout<<supervisor<<endl;
    cout<<employ<<endl;

    return 0;
}