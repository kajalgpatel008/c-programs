#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();
	printf("\nEnter N :");
	scanf("%d" ,&n);
	do
	{
		sum=sum+n;
		n--;
	}while(n>0);
	printf("\nsum : %d" ,sum);
	getch();
}
