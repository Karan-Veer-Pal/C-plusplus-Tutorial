// Day : 98 WAP to demonstrate the use of funtion overloading?

#include<iostream.h>

void print(int num)
{
	cout<<"Printing integer:"<<num<<endl;
}
void print(double num)
{
	cout<<"Printing double:"<<num<<endl;
}

int main()
{
	print(5);
	print(3.14);

	return 0;
}
