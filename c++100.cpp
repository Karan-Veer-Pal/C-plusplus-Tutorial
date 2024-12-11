//WAP to demonstrate the concept of scope resolution operator?
#include<iostream.h>
#include<conio.h>

class manager
{
	char name[32];
	int id;
	float salary;

	public:
		void get_input();
		void print_output();
};
void manager::get_input()
{
	cout<<"Enter employee name:"<<endl;
	cin>>name;
	cout<<"Enter employee id:"<<endl;
	cin>>id;
	cout<<"Enter employee salary:"<<endl;
	cin>>salary;
}
void manager::print_output()
{
	cout<<"Employee name is:"<<name<<endl;
	cout<<"Employee id is:"<<id<<endl;
	cout<<"Employee salary is:"<<salary<<endl;
}

void main()
{
	manager s;
	clrscr();

	s.get_input();
	s.print_output();

	getch();
}
