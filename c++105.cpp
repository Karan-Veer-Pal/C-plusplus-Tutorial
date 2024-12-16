// Day : 105 WAP to demonstrate the concept of hierarical inheritance?

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

class C : public A
{
	public:
	void get_c(void)
	{
		cout<<"I am derived by A class"<<endl;
	}
};
class D : public B, public C
{
	public:
	void get_d(void)
	{
		cout<<"I am derived by B and C class"<<endl;
	}
};

int main()
{
	B obj1;
	C obj2;
	D obj3;
	
	obj1.get_a();

	obj2.get_a();

	obj3.get_b();
	obj3.get_c();
	obj3.get_d();

	return 0;
}
