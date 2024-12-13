// Day : 102 WAP to demonstrate the concept of multi-level inheritance?

#include<iostream>

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

int main()
{
	C obj;
	
	obj.get_a();
	obj.get_b();
	obj.get_c();

	return 0;
}
