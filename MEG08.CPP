//WAP to demonstrate the use of funtion overloading?
#include<iostream.h>
#include<conio.h>

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
	clrscr();
	print(5);
	print(3.14);

	getch();
}