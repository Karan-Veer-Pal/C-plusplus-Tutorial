//WAP to demonstrate the concept of hierarical inheritance?
#include<iostream.h>
#include<conio.h>

class A
{
	public:
	void get_a(void)
	{
		cout<<"I am base A Class"<<endl;
	}
};

class B : public A
{
	public:
	void get_b(void)
	{
		cout<<"I am derived by A class"<<endl;
	}
};

class C : public A
{
	public:
	void get_c(void)
	{
		cout<<"I am derived by A class"<<endl;
	}
};
void main()
{
	B obj1;
	C obj2;
	clrscr();
	obj1.get_a();
	obj2.get_a();
	getch();
}