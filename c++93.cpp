// Day : 93 WAP to get the data and print the data using class take the inbuild data?

#include<iostream>

class employee
{
	char name[32];
	int id;
	float salary;

	public:
		void get_data(int b, float c)
		{
			id=b;
			salary=c;
		}

		void put_data()
		{
			//cout<<"Enter the name of the employee:"<<endl<<name<<endl;
			cout<<"Enter the id of the employee:"<<endl<<id<<endl;
			cout<<"Enter the salary of the employee:"<<endl<<salary<<endl;
		}
};

int main()
{
	employee s;

	s.get_data(34,1500.56);
	s.put_data();

	return 0;
}
