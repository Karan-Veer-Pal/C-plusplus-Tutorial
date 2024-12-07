//********************WORNG*******************************************
#include<iostream.h>
#include<conio.h>

class test
{
	int code;
	static int count;

	public:
		void set_code()
		{
			code=++count;
		}
		void show_code()
		{
			cout<<"Object number:"<<code<<endl;
		}
		static void show_count()
		{
			cout<<"Count="<<count<<endl;
		}
};


void main()
{
	test t1, t2;
	clrscr();

	t1.set_code;
	t2.set_code;

	test::show_count();

	test t3;
	t3.set_code;

	test::show_count();

	t1.show_code();
	t2.show_code();
	t3.show_code();

	getch();
}
