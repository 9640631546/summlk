#include<stdio.h>
#include<conio.h>
void sum();
void main()
{
	clrscr();
	sum();
	getch();
}
void sum()
{
	int num1,num2;
	printf("enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	printf("sum of %d and %d is %d\n",num1,num2,num1+num2);
}