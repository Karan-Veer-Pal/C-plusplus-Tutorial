#include<iostream.h>
#include<conio.h>

class item
{
	static int count;
	int no;

	public:
		void get_data(int a)
		{
			no=a;
			count++;
		}
		void get_count()
		{
			cout<<"count="<<count<<endl;
		}
};

int item::count;

void main()
{
	item a, b, c;
	clrscr();

	a.get_count();
	b.get_count();
	c.get_count();

	a.get_data(100);
	b.get_data(200);
	c.get_data(300);

	cout<<"After reading data:"<<endl;

	a.get_count();
	b.get_count();
	c.get_count();


	getch();
}
