//WAP to get the data and print the data using class take the data from the user?
#include<iostream.h>
#include<conio.h>

class employee
{
	char name[32];
	int id;
	float salary;

	public:
		void get_data()
		{
			cout<<"Enter the name of the employee:"<<endl;
			cin>>name;
			cout<<"Enter the id of the employee:"<<endl;
			cin>>id;
			cout<<"Enter the salary of the employee:"<<endl;
			cin>>salary;
		}

		void put_data()
		{
			cout<<"Enter the name of the employee:"<<endl<<name<<endl;
			cout<<"Enter the id of the employee:"<<endl<<id<<endl;
			cout<<"Enter the salary of the employee:"<<endl<<salary<<endl;
		}
};

void main()
{
	employee s;
	clrscr();

	s.get_data();
	s.put_data();

	getch();
}