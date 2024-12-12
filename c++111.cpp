// Day : 101 WAP to demonstrate the concept of single inheritance?

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
		cout<<"I am derived B class"<<endl;
	}
};

int main()
{
	B obj;

	obj.get_a();
	obj.get_b();

	return 0;
}
