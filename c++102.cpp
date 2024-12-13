//WAP to demonstrate the concept of multi-level inheritance?
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

class C : public B
{
	public:
	void get_c(void)
	{
		cout<<"I am derived by B class"<<endl;
	}
};
void main()
{
	C obj;
	clrscr();
	obj.get_a();
	obj.get_b();
	obj.get_c();
	getch();
}
