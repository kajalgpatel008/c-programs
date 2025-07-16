#include<stdio.h>
#include<conio.h>
void main()
{
	int num,digit,sum=0;
	int temp;
	temp=num;
	clrscr();
	printf("\nEnter Number : ");
	scanf("%d",&num);
	while(num!=0)
	{
	     digit=temp%10;
	     sum+=digit*digit*digit;
	     temp=temp/10;
	     num++;
	}
	if(sum==num)
	{
		printf("\nnum is Armstrong Number : ");
	}
	else
	{
		printf("\nnum is not Armstrong Number : ");
	}
	getch();
}