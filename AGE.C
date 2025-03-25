#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("\n Enter your age :");
	scanf("%d" ,&age);
	printf("\nyou entered %d as your age" ,age);
	if(age<18)
	{
		printf("\nyou can not vote!");
	}
	else
	{
		printf("\nyou can vote!");
	}
	getch();
}