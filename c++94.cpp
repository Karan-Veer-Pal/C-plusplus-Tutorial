// Day : 95 WAP to get the data from user and declare the function body outside the class use scope resolution?

#include<iostream>

class student
{
	char name[32];
	int r_no;
	float percent;

	public:
		void get_data();
		void put_data();
};

void student::get_data()
{
	cout<<"Enter the name of the student:"<<endl;
	cin>>name;
	cout<<"Enter the roll number of the student:"<<endl;
	cin>>r_no;
	cout<<"Enter the percent of the student:"<<endl;
	cin>>percent;
}

void student::put_data()
{
	cout<<"The name of the student:"<<endl<<name<<endl;
	cout<<"Roll number of the student:"<<endl<<r_no<<endl;
	cout<<"Percent of the student:"<<endl<<percent<<endl;
}

int main()
{
	student s, s1;

	s.get_data();
	s.put_data();
	s1.get_data();
	s1.put_data();

	return 0;
}
