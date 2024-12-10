// Day : 99 WAP to demonstrate the use of array of object?

#include<iostream.h>

class student
{
	int r_no;
	float percent;

	public:
		void get_data()
		{
			cout<<"Enter the roll no:"<<endl;
			cin>>r_no;
			cout<<"Enter the percentage:"<<endl;
			cin>>percent;
		}
		void put_data()
		{
			cout<<"The roll no is:"<<r_no<<endl;
			cout<<"The percentage is:"<<percent<<endl;
		}
};
const int size=3;
int main()
{
	//const int size=3;
	student s[size];

	for(int i=0; i<size; i++)
	{
		cout<<"Enter details for student"<<i+1<<endl;
		s[i].get_data();
	}
	for(i=0; i<size; i++)
	{
		cout<<"Details of student"<<i+1<<endl;
		s[i].put_data();
	}

	return 0;
}
