// WAP to print the adddress of a variable use this address ta get the value of this variable?

#include<stdio.h>
#include<conio.h>

void main()
{
	int *ptr, i;
	ptr=&i;
	clrscr();

	printf("Enter the value of i:\n");
	scanf("%d", &i);

	printf("The address of i is:%u\n", &i);
	printf("The address of i is:%u\n", ptr);

	printf("The value of i is:%d\n", i);
	printf("The value of i is:%d\n", *ptr);

	getch();
}
