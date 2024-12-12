//WAP to demonstrate the concept of single inheritance?
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
		cout<<"I am derived B class"<<endl;
	}
};
void main()
{
	B obj;
	clrscr();
	obj.get_a();
	obj.get_b();
	getch();
}